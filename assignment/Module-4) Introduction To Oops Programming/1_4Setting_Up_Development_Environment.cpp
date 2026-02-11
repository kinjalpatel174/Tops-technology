//Write a program that asks for two numbers and displays their sum. Ensure this is 
//done after setting up the IDE (like Dev C++ or CodeBlocks). 
//o Objective: Help students understand how to install, configure, and run programs 
//in an IDE.

#include <iostream>
using namespace std;

class data{
	private:
		int a,b,sum;
	
	public:
		void sum1(){
			cout<<"Enter A :";
			cin>>a;
			
			cout<<"Enter B :";
			cin>>b;
			
		
			sum = a + b;
        	cout << "Sum = " << sum;
		}	
};

int main(){
	data obj;
	obj.sum1();
}
