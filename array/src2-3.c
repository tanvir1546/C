/* This program takes multiple words and merge all   
 * the repetition of given alphabet.  
 * ファイル名：src2-3.c 		  Path: ~/array/src2-3.c
 * Author: HASAN MOHAMMAD TANVIR 		 
 * gcc version 8.1.0					　
 */
#include <stdio.h>
#include <string.h>

void stopRepetition(char str[], char var){
	
	char ch=' ';
	for (int n=0; str[n]!='\0'; n++){

		if (str[n] == var && ch == ' '){
			ch= var;
			printf("%c",str[n]);
		}else if (str[n] == var && ch == var){
			ch = var;
		}else if(str[n] ==' '){
			ch=' ';
			printf("%c",str[n]);
		}else
			printf("%c",str[n]);
	}
}
int main(int argc,
	 char *argv[]){

	int MAX_BUFFER = 100;
	char buffer[MAX_BUFFER];
	char var = argv[1][0];

	printf("INPUT >");
	fgets(buffer, MAX_BUFFER, stdin);

	stopRepetition(buffer,var);
	
return 0;
}
