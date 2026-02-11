 #include <iostream>
 using namespace std;
 class A{
 	int a;
 	public:
 		void putdata(){
 			cout<<"\nEnter A :";
 			cin>>a;
		 }
		 void getdata(){
		 	cout<<"\nA is : "<<a;
		 }
 };
 
 
 class B:public A{
 	int b;
 	public:
 	void putdataB(){
		cout<<"\nEnter B :";
		cin>>b;
	 }
	 void getdataB(){
	 	cout<<"\nB is :"<<b;
	 }
 };
 
 class C:public A{
 	int c;
 	public:
 		void putdataC(){
 			cout<<"\nEnter C : ";
 			cin>>c;
		 }
		 void getdataC(){
		 	cout<<"\nC is :"<<c;
		 }
 };
 
 class D:public B,public C{
 	int d;
 	public:
 		void putdataD(){
 			cout<<"\nEnter D:";
 			cin>>d;
		 }
		void getdataD(){
			cout<<"\nD is :"<<d;
		}
 };
 
 
 int main(){
 	C obj;
 	obj.putdata();
 	obj.getdata();
 	obj.putdataC();
 	obj.getdataC();
 	D obj2;
 	obj2.putdataB();
 	obj2.getdataB();
 	obj2.putdataD();
 	obj2.getdataD();
 	obj2.putdataB();
 	obj2.getdataB();
 	return 0;
 }
