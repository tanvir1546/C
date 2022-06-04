/* This is the header file for main.c and functions.c
 * this has been used for making our program modular. 
 * ファイル名：modular.c         Path: ~/modular/myhead.h
 * Author: HASAN MOHAMMAD TANVIR         
 * gcc version 8.1.0                    　
 */
#ifndef __functions_H__
#define __functions_H__

struct List{
    int data;
    struct List* next;
};
struct List* new_node(int val);
void display( struct List* s_node);
void add_new(struct List** root,int n );
int index_after(void); 

#endif