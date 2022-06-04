/* This program inserts new value at given index in listed structure
 * ファイル名：src5-2.c         Path: ~/listedStructure/src5-2.c
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
void display( struct List* s_node){

    while( s_node != NULL){
        printf("%d\t", s_node->data);
         s_node= s_node->next;
    }   
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

int main (){
    int n;
    struct List* root = NULL;
    root = new_node(1);
    struct List* ptr= root;
    for (int n=2; n<=10; n++){
        ptr->next=new_node(n);
        ptr=ptr->next;
    }
    struct List* s_node= root;
    display(s_node);
    printf("\nIndex of new item to be added >");
    scanf("%d",&n);
    add_new(&root,n);
    struct List* s_node1= root;
    display(s_node1);

return 0;
}
