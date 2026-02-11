//Write a program that demonstrates the difference between local and global
//variables in C++. Use functions to show scope.
//o Objective: Reinforce the concept of variable scope.

#include <iostream>
using namespace std;

class data{
	private:
		int a,b; //This is private variable
	public:
		void getdata(){
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter B : ";
			cin>>b;
			
			int sum=a+b; // Sum is public variable 
			cout<<"Total Sum is : "<<sum;
		}
};

int main(){
	data obj;
	obj.getdata();
	
	return 0;
}
