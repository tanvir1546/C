/* This program creates a listed structure and takes value  
 * then iterate over the value.
 * ファイル名：src4-1.c         Path: ~/listedSturcture/src4-1.c
 * Author: HASAN MOHAMMAD TANVIR         
 * gcc version 8.1.0                    　
 */
 #include <stdio.h>
#include <stdlib.h>

struct List{
int data;
struct List* next;
};
static struct List* new_node(int val){
    struct List* instance = (struct List*) malloc(sizeof(struct List));
    instance->data=val;
    instance->next=NULL;
    return instance;
}


void main (void){
    struct List* root = NULL;
    root = new_node(1);
    struct List* ptr= root;
    struct List* current=root;
    for (int n=2; n<=10; n++){
        ptr->next=new_node(n);
        ptr=ptr->next;
    }
    while(current != NULL){
        printf("%d\n",current->data);
        current=current->next;
    }
}
