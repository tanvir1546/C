/* This program takes the single string and shows 
 * the corresponding output defined and continue 
 * until 'q' is pressed. 
 * ファイル名：main.c 		  Path: ~/kadai1/Exercise2/main.c
 * Author: Hasan Mohammad Tanvir		  学籍番号：223381
 * gcc version 8.1.0					　課題１（2）
 */


#include <stdio.h>
#include <conio.h>

/* function with return_type void
 * ch is used as parameter.  
 */
void prog_case(char ch){

	switch(ch){
		case 'o':
			puts("Open file");
			break;
		case 's':
			puts("Save file");
			break;
		case 'p':
			puts("Print data");
			break;
		case 'a':
			puts("Add Data");
			break;
		case 'q':
			puts("Quit program");
			break;
		default:
			puts("Invalid Command");
			break;
	}
}

int main()
{
	//declearing char type variable ch
    char ch;

    //run the loop while true
    while(1){
	printf("Input > ");
	//read single byte of character, solve the issue of '\n'.
	ch=getch();
	printf("%c\n",ch);
	
	prog_case(ch);
    
    //breaks the loop if q is pressed. 
    if(ch=='q')
        break;
    }
return 0;
}
