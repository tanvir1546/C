/* This program takes the single string and shows 
 * the corresponding output defined and continue until
 * 'q' is pressed. if statment is used to implement.
 * ファイル名：main_if.c  Path: ~/kadai1/Exercise2/main_if.c
 * Author: Hasan Mohammad Tanvir          学籍番号：223381
 * gcc version 8.1.0                    　課題１（2）
 */

#include <stdio.h>
#include <conio.h>

void prog_if(char ch){
    if (ch=='o'){
        puts("Open file");
    }else if (ch=='s'){
        puts("Save file");
    }else if (ch=='p'){
        puts("Print Data");
    }else if (ch=='a'){
        puts("Add Data");
    }else if (ch=='q'){
        puts("Quit program");
    }else{
        puts("Invalid Command");
    }
}

int main()
{
    char ch;
    while(1){
        printf("Input > ");
        ch=getch();

        printf("%c\n",ch);
        
        prog_if(ch);
    
    if(ch=='q'){
        break;
        }
    }
return 0;
}
