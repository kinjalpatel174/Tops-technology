#include <iostream>
using namespace std;

class A{
	protected:
		int a,b;
		
	public:
		void datainA(){
			cout<<"Enter A: ";
			cin>>a;
		}
		void dataprintA(){
			cout<<"\nA : "<<a;
		}
};

class B :public A{
	public:
		void datainB(){
			cout<<"\nEnter B:";
			cin>>b;
		}
		void dataprintB(){
			cout<<"\nB :";
		}
};

int main(){
	B obj;
	obj.datainA();
	obj.dataprintA();
	
	obj.datainB();
	obj.dataprintB();
}
