/* This program sorts a listed structure usign bubble sort 
 * ファイル名：src5-1.c         Path: ~/listedStructure/src5-1.c
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
void sorted_insert(struct List** root, struct List* newNode)
{
    struct List temp_node;
    struct List* current = &temp_node;
    temp_node.next = *root;
 
    while (current->next != NULL && current->next->data < newNode->data) {
        current = current->next;
    }
 
    newNode->next = current->next;
    current->next = newNode;
    *root = temp_node.next;
}
 
// Given a list, change it to be in sorted order.
void sort_list(struct List** root)
{
    struct List* result = NULL;     // build the answer here
    struct List* current = *root;   // iterate over the original list
    struct List* next;
 
    while (current != NULL)
    {
        next = current->next;
        sorted_insert(&result, current);
        current = next;
    }
    *root = result;
}
int main (){
    int n;
    int arr[9]={66,99,11,25,23,83,14,33,18};
    struct List* root = NULL;
    root = new_node(46);
    struct List* ptr= root;
    for (int n=1; n<=8; n++){
        ptr->next=new_node(arr[n]);
        ptr=ptr->next;
    }
    struct List* s_node= root;
    printf("LIST>\n");
    display(s_node);
    printf("\n");
    sort_list(&root);
    struct List* s_node1= root;
    printf("LIST AFTER SORTING>\n");
    display(s_node1);

return 0;
}
