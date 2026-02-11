/*3. Basic Structure of a C Program 
	Write a C program that includes variables, constants, and comments. Declare 
	and use different data types (int, char, float) and display their values. */

// This is singal line comment.
/*This is multi line comment*/

#include <stdio.h>
#include <conio.h>

void main(){
	int a=10;
	float b=20.5;
	char c= 'A';
	
	printf("\n%d",a);
	printf("\n%f",b);
	printf("\n %c",c);
	
	getch();
}
