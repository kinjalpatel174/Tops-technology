// Write a C program that stores 5 integers in a one-dimensional array and prints them. 
//Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.

#include <stdio.h>
#include <conio.h>

void main(){
	int d[5]={10,20,30,40,50};
	int a[2][2];
	int i,j,sum=0;
	printf("----- one-dimensional array -----");
	for(i=0;i<5;i++){
		printf("\n %d [%d]",i,d[i]);
	}
	
	printf("\n----- two-dimensional array(3 x 3) -----");
	
	printf("\n----- This is For A-----");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nenter your elemet %d : row %d : col : ",i,j);
			scanf("%d",&a[i][j]);
			sum += a[i][j];
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n a[%d][%d] : %d",i,j,a[i][j]);
		}
	}
	
	printf("\nSum of All Elements : %d",sum);
	
	getch();
}
