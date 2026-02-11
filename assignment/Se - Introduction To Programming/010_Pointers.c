//Write a C program to demonstrate pointer usage. Use a pointer to modify the 
//value of a variable and print the result.

#include <stdio.h>
#include <conio.h>

void main(){
	int a = 20;
	int *p;
	
	p=&a;
	
	*p=22;
	
	printf("number of a : %d",a);
	
	printf("\n Modifyed Number : %d",*p);
	
	getch();
}
