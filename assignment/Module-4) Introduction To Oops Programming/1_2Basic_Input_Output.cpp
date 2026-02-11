//Write a C++ program that accepts user input for their name and age and then
//displays a personalized greeting.
//Objective: Practice input/output operations using cin and cout.

#include <iostream>
using namespace std;

int main(){
	string name;
	int age;
	cout<<"Enter Your Name :";
	cin>>name;
	cout<<"Enter your Age :";
	cin>>age;
	
	cout<<"\nName is : "<<name;
	cout<<"\nAge is : "<<age;
	
	return 0;
}
