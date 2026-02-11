//Write a C program to create a file, write a string into it, close the file, then 
//open the file again to read and display its contents.

#include <stdio.h>
#include <conio.h>

void main(){
	FILE *f1;
	
	f1 = fopen("data.txt","w");
	
	if(f1== NULL){
		printf("file not wrute ...");
		return 1;
	}
	
	fprintf(f1,"hello this is data file...");
	
	fclose(f1);
	
	return 0;
	
} 
