/* This program takes two array and prints one array with  
 * other array as the length of the array was not long enough
 * ファイル名：src2-1.c 		  Path: ~/array/src2-1.c
 * Author: HASAN MOHAMMAD TANVIR 		 
 * gcc version 8.1.0					　課題2（1）
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,
	 char *argv[]){
	char month[2][5]={"APRIL","MAY"};
	int n;
	for (n=0;n<2;n++){
		printf("month[%d] = %s\n",n,month[n]);
}
return 0;


}
