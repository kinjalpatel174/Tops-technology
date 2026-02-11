//Write a C program that accepts two integers from the user and performs 
//arithmetic, relational, and logical operations on them. Display the results. 

#include <stdio.h>
#include <conio.h>

void main(){
//	1) assigement (=)
	int a;
	int b,ans;
	printf("Enter Value A:");
	scanf("%d",&a);
	printf("Enter Value B:");
	scanf("%d",&b);
	
//	2) artimatic (+,-,/,%)
	ans=a+b;
	printf("sum : %d",ans);
//	3) restional op (>,<,>=,<=,==,!=)
	int max;
	max=a<b;
	printf("\nmax : %d",max);
//	4) logical
	printf("\nA==B : ");
	printf(!(a == b) ? "true":"false");
	getch();
}
