#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char ID[9];
	char name[33]; 
	int  score; 
} student;
int main(){

	student student_list[100];
	int read =0; 
	int record =0;
	FILE* fp =fopen("students.csv","r");
	do{
		read=fscanf(fp, "%9[^,],%33[^,],%d\n",
				student_list[record].ID,
				student_list[record].name,
				&student_list[record].score);
		if (read==3) record++; 
		//after reading 3, it will next line
	}while(!feof(fp));
	//continues the loop until the end of file
	fclose(fp);
	printf("\n %d records read.\n\n",record);
	for (int n=0; n<record; n++){
	printf("%s\t%s\t%d\n", 
				student_list[n].ID,
				student_list[n].name,
				student_list[n].score);
	}
return 0;
}