/* This is a exercise of moduler approch in C.   
 * All the function used in main.c is here. 
 * ファイル名：funcitons.c         Path: ~/modular/functions.c
 * Author: HASAN MOHAMMAD TANVIR         
 * gcc version 8.1.0                   
 */
#include <stdio.h>
#include <stdlib.h>
#include "myhead.h"

struct List* new_node(int val){
    struct List* instance = (struct List*) malloc(sizeof(struct List));
    instance->data=val;
    instance->next=NULL;
    return instance;
}
void display( struct List* root){
    struct List* s_node= root;
    while( s_node != NULL){
        printf("%d\t", s_node->data);
         s_node= s_node->next;
    }   
}
int index_after(void){
    int n; 
    printf("\nIndex of new item to be added >");
    scanf("%d",&n);
    return n; 
}
void add_new(struct List** root,int n ){
    int i=0;
    struct List* temp_node=NULL;
    struct List* prev_node= (*root); 
    if (n==0){
        
        temp_node=new_node(4);
        temp_node->next=(*root);
        (*root)=temp_node;
    }
    else{
        while(i<n-1 && prev_node->next!=NULL){
            prev_node= prev_node->next;
            i++;
        }
        temp_node=new_node(4);;
        temp_node->next=prev_node->next;
        prev_node->next=temp_node;
    }
}
