/* This program removes value from listed structrure     
 * at the given index. 
 * ファイル名：src4-2.c         Path: ~/listedStructure/src4-2.c
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
int main (){
    int i=0,n;
    int retval=0;
    struct List* root = NULL;
    root = new_node(1);
    struct List* ptr= root;
    for (int n=2; n<=10; n++){
        ptr->next=new_node(n);
        ptr=ptr->next;
    }
    struct List* s_node= root;
    while( s_node != NULL){
        printf("%d\t", s_node->data);
         s_node= s_node->next;
    }
    
    printf("\nIndex to be deleted >");
    scanf("%d",&n);
    struct List* rm_node= root; 
    struct List* temp_node=NULL;
    if (n==0){
        temp_node=(rm_node)->next;
        retval=(rm_node)->data;
        free(root);
        root=temp_node;
        free(temp_node); 
    }
    else{
        while(i<n-1 && rm_node->next!=NULL){
            rm_node= rm_node->next;
            i++;
        }
        temp_node= rm_node->next;
        retval=temp_node->data;
        rm_node->next=temp_node->next;
        free(temp_node);
    
    }
    
    struct List* s_node1= root;
    while( s_node1 != NULL){
        printf("%d\t", s_node1->data);
         s_node1= s_node1->next;
    }
    printf("\n");
return 0;
}
