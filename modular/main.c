/* This program adds new element in our listed stucture 
 * in the given index. Modular approach has been used. 
 * ファイル名：main.c         Path: ~/modular/main.c
 * Author: HASAN MOHAMMAD TANVIR         
 * gcc version 8.1.0                    　
 */
#include <stdio.h>
#include <stdlib.h>
#include "myhead.h"
int main (){
    int n;
    struct List* root = NULL;
    root = new_node(1);
    struct List* ptr= root;
    for (int n=2; n<=10; n++){
        ptr->next=new_node(n);
        ptr=ptr->next;
    }
    display(root);
    n=index_after(); 
    add_new(&root,n);
    display(root);

return 0;
}
