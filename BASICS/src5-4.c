/* Macros implementation of if statement. 
 * ファイル名：src5-4.c         Path: ~/BASICS/src5-4.c
 * Author: HASAN MOHAMMAD TANVIR         
 * gcc version 8.1.0                    　
 */
 #include <stdio.h>
#include <stdlib.h>

#define abs(a) ((a)>=0 ? (a):(-a))

int main (int argc, 
	char *argv[]){
    int a = atoi(argv[1]);
    int b;
    b = abs(a);
    printf("abs(%d) = %d \n", a, b);
return 0;
}
