/* This program takes the input from the user in terminal 
 * and print each array of the argument in a single line.
 * ファイル名：main.c 		  Path: ~/kadai1/Exercise1/main.c
 * Edited By: Hasan Mohammad Tanvir		  学籍番号：223381
 * gcc version 8.1.0					　課題１（１）
 */

//Header to call the standard I/O functions
#include<stdio.h>										

/*argc is the number of arguments passed from the terminal
 argv[] is the array of the argument.
 */
int main(int argc, char *argv[]){
	
	//looping until n is less than the number of arguments passed
	for (int n=0; n<argc; n++){
	
		//printing the value of each array
		puts("%s", argv[n]);
	}
return 0;
}

