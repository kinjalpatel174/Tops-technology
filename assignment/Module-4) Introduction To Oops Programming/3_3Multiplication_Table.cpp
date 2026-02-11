//Write a C++ program to display the multiplication table of a given number using a for loop. 
//Objective: Practice using loops. 

#include <iostream>
using namespace std;

int main(){
	int number,mul,i;
	cout<<"Enter Number : ";
	cin>>number;
	for(i=1;i<=10;i++){
		mul=number*i;
		cout<<number<<"X" <<i <<" = " <<mul <<"\n";
		
	}
	
	return 0;
}
