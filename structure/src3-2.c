#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
	char ID[9];
	char name[33]; 
	int  score; 
} student;
student getInfo (){
	student s1;
	printf("ID    >");
	scanf("%[^\n]%*c",s1.ID);
	printf("NAME  >");
	scanf("%[^\n]%*c",s1.name);
	printf("SCORE >");
	scanf("%d",&s1.score);
	return s1; 
}
student* str(char ID[], char name[], int score){
	student* inst;
	inst= (student*) malloc(sizeof(student));
	return inst;
}

int main(){
	student* s;
	student s1;
	s1 = getInfo();
	s=str(s1.ID, s1.name, s1.score);
	printf("%s\t%s\t%d\n", s1.ID, s1.name, s1.score);
	printf("address: %p\n", s);
return 0;
}