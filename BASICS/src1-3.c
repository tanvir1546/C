/* This program takes the input from the user in terminal 
 * and print each array of the argument in a single line.
 * ファイル名：main.c 		  Path: ~/kadai1/Exercise1/main.c
 * Author: 		 
 * gcc version 8.1.0					　課題１（3）
 */

#include <stdio.h>

int main (int argc,
	char *argv[]){
int MAX_BUFFER = 10;
char buffer[MAX_BUFFER];

while(1){
	printf("INPUT > ");
	fgets(buffer, MAX_BUFFER, stdin);
	printf("string = %s \n",buffer);

if (buffer[0]=='q')
	break;
}
return 0;
}
