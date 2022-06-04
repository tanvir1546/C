/* This program takes a sentence as input and reverse   
 * every word in the sentence. 
 * ファイル名：src2-4.c 		  Path: ~/array/src2-4.c
 * Author: HASAN MOHAMMAD TANVIR 		 
 * gcc version 8.1.0					　
 */
 #include <stdio.h>
#include <string.h>

void * resverse(char * str){

	int i,len; 
	int temp=0; 

	len = strlen(str);

	for (int n=0; n<len;n++){
		
		temp++; 
		
		if(str[n]=='\n')
			str[n]=' ';
		if(str[n]==' '){
			for(i=n; i>=n-temp;i--){
				printf("%c", *(str+i));
			}
		temp=0;
	}


}

int main(){

	int MAX_BUFFER = 100;
	int i, len;
	char buffer[MAX_BUFFER];

	printf("INPUT >");
	fgets(buffer, MAX_BUFFER, stdin);
	resverse(buffer);
	

return 0;
}