#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char ID[9];
	char name[33]; 
	int  score; 
} student;
int main(){

	student *student_list;
	int read =0; 
	int record =0;
	int temp=0;
	char c;
	FILE* fp =fopen("students.csv","r");
	do{
		c=fgetc(fp);
		if(c=='\n')	temp++;
	}while(c!=EOF);
	fclose(fp);
	printf("no of line %d", temp);
 	student_list = (student*) malloc(temp * sizeof(student));
	FILE* fp1 =fopen("students.csv","r");
	do{
		read=fscanf(fp1, "%9[^,],%33[^,],%d\n",
				(student_list+record)->ID,
				(student_list+record)->name,
				&(student_list+record)->score);
		if (read==3) record++; 
		//after reading 3, it will next line
	}while(!feof(fp));
	//continues the loop until the end of file
	fclose(fp1);
	printf("\n %d records read.\n\n",record);
	FILE* fpread=fopen("students.txt","w");
	for (int n=0; n<record; n++){
	fprintf(fpread,"%s,%s,%d\n", 
				(student_list+n)->ID,
				(student_list+n)->name,
				(student_list+n)->score);
	}
	fclose(fpread);
return 0;
}