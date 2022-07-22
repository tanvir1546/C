#include <stdio.h>
#include <string.h>

typedef struct {
	char ID[9];
	char name[33]; 
	int  score; 
} student;

int main(){
	student s1;
	printf("ID    >");
	scanf("%[^\n]%*c",s1.ID);
	printf("NAME  >");
	scanf("%[^\n]%*c",s1.name);
	printf("SCORE >");
	scanf("%d",&s1.score);
	printf("%s\t%s\t%d",s1.ID, 
              s1.name, s1.score);
return 0;
}
