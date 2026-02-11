#include <iostream>

using namespace std;
class Student{
		private:
			int roll;
			string name1;
			
		public:
			Student(){
				cout<<"\nEnter Your roll number : ";
				cin>>roll;
				cin.ignore();
				cout<<"\nEnter Your Name : ";
				getline(cin,name1);
			}
			Student(int r,string n){
				roll = r;
				name1=n;
			}
			
			Student(const Student &n){
				roll =n.roll;
				name1 = n.name1;
			}
			
			void print(){
				cout<<"\nroll Number :"<<roll;
				
				cout<<"\nstudent name :"<<name1;
			}
			
			
	};
int main(){
	Student s1(22,"ketan");
	s1.print();
	
	Student s2;
	s2.print();
	
	Student s3(s1);
	s3.print();
	
	return 0;
}
