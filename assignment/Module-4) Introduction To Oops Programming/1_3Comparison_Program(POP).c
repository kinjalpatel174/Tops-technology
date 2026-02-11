//Write two small programs: one using Procedural Programming (POP) to calculate the
//area of a rectangle, and another using Object-Oriented Programming (OOP) with a
//class and object for the same task.
//Objective: Highlight the difference between POP and OOP approaches.

//This is C program (POP)

#include <stdio.h>
#include <conio.h>



int main(){
	float length,width,area;
	
	printf("Enter length :");
	scanf("%f",&length);

	printf("Enter width :");
	scanf("%f",&width);
	
	area=length*width;
	printf("\n Total Area is : %f",area);
	
	
	return 0;
}
