#include <iostream>
using namespace std;

class student{
	private:
		int roll;
		string name1;
		
	public:
		void getdata(){
			cout<<"\nEnter roll number :";
			cin>>roll;
			cin.ignore();
			cout<<"\nenter your name :";
			getline(cin,name1);
		
		void putdata(){
			cout<<"\n your roll number is :"<<roll;
			cout<<"\n yout name is :"<<name1;
		}
};

int main(){
	student s1;
	
	s1.getdata();
	s1.putdata();
	
	student s2;
	s2.getdata();
	s2.putdata();
	return 0;
	
}
