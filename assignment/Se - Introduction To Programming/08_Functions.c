//Write a C program that calculates the factorial of a number using a function. 
//Include function declaration, definition, and call.

#include <stdio.h>
#include <conio.h>

int fact(int n){
	int fact=1;
	int i;
		for(i=1;i<=n;i++){
			fact=fact*i;
		}
		
		return fact;
	}

void main(){
	int a;
	
	printf("Enter Number :");
	scanf("%d",&a);
	
	printf("Number of factorial is : %d",fact(a));
	
	getch();
}
