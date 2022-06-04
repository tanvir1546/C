/* Single line if implementation
 * ファイル名：src5-3.c         Path: ~/BASICS/src5-1.c
 * Author: HASAN MOHAMMAD TANVIR         
 * gcc version 8.1.0                    　
 */#include <stdio.h>
#include <stdlib.h>

int main (int argc, 
	char *argv[]){
    int a = atoi(argv[1]);
    int b;
    printf("abs(%d) = %d \n", a, b = (a>=0 ? a:-a));
return 0;
}
