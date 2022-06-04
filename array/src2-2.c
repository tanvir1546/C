/* This program takes multiple words and merge all   
 * the repetition of given alphabet.  
 * ファイル名：src2-3.c 		  Path: ~/array/src2-3.c
 * Author: HASAN MOHAMMAD TANVIR 		 
 * gcc version 8.1.0					　
 */
#include <stdio.h>
#include <string.h>

char * reverse(char * str, char *out){

	int i,len,j; 
	int temp=0; 

	len = strlen(str);

	for (int n=0; n<len;n++){
		
		temp++; 
		
		if(str[n]=='\n')
			str[n]=' ';
		if(str[n]==' '){
			for(i=n; i>=n-temp;i--){
				out[j]= *(str+i);
				j++;
			}
		temp=0;
	}


}

return out; 

}
int main(){

	int MAX_BUFFER = 100;
	char buffer[MAX_BUFFER];
	char s[100]; 
	printf("INPUT >");
	fgets(buffer, MAX_BUFFER, stdin);
	reverse(buffer, s);
	printf("%s",s); 
return 0;
}