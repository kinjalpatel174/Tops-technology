/*
Write a C program that defines a structure to store a student's details (name, 
roll number, and marks). Use an array of structures to store details of 3 students and print them. 
*/

#include <stdio.h>
#include <conio.h>
struct student{
	char name[50];
	int roll;
	float marks;
};
void main(){
	struct student a;
	
	printf("Enter Your Name :");
	scanf("%s",&a.name);
	
	printf("\nEnter Your roll number :");
	scanf("%d",&a.roll);
	
	printf("\nEnter Your Marks :");
	scanf("%f",&a.marks);
	
	printf("\n-----Student Details-----\n");
	
	printf("\n Student Name : %s",a.name);
	printf("\n Student Name : %d",a.roll);
	printf("\n Student Name : %.1f",a.marks);
	getch();
}
