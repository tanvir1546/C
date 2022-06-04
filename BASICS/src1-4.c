/* This program solves the problem caused by remianing 
 * input in input stream. 
 * ファイル名：main.c 		  Path: ~/kadai1/Exercise4/main.c
 * Edited by: Hasan Mohammad Tanvir		  学籍番号：223381
 * gcc version 8.1.0					　課題１（１）
 */

#include <stdio.h>

//function to store input stream in a variable 
void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main (int argc,
	char *argv[]){
int MAX_BUFFER = 10;
char buffer[MAX_BUFFER];

while(1){
	printf("INPUT > ");
	fgets(buffer, MAX_BUFFER, stdin);
	printf("string = %s \n",buffer);
//	fflush(stdin);
	clean_stdin();
if (buffer[0]=='q')
	break;
}
return 0;
}

