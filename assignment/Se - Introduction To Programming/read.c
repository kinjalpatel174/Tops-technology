#include <stdio.h>
#include <conio.h>

void main(){

	FILE *f1;
	char str[100];
	
	f1 = fopen("data.txt","r");

	if(f1 == NULL){
		printf("Error file not write..\n");
		return 1;	
	}
	
	while(fgets(str,100,f1) != NULL){
		printf("%s",str);
	}
	
	fclose(f1);
	getch();
}
