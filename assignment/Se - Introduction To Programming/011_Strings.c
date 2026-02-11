//Write a C program that takes two strings from the user and concatenates them 
//using strcat(). Display the concatenated string and its length using strlen().

#include <stdio.h>
#include <conio.h>


void main(){
	char name[50];
	char data[50];
	
	printf("Enter name 1 : ");
	gets(name);
	
	printf("\nEnter name 2 : ");
	gets(data);
	
	
	printf("\n%s",name);
	printf("\n%s",data);
	
	strcat(name,data);
	printf("\nconcatenated string is : %s",name);
	printf("\nconcatenated string length using is : %d",strlen(name));
	
	getch();
}
