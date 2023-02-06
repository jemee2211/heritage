#include<iostream>
#include<string.h>
using namespace std;

class A {
	public:
		int id;
		char name[100];
		char role[100];
		int salary;
		int experience;
		char comp_name[100];
		char address[100];
		char email[100];
		int contact;
	
	void set1 ()
    	{
    		cout<<"enter your id=";
    	 	cin>>id;
    	 	cout<<"enter your name=";
    	 	cin>>name;
    	 	cout<<"enter your role=";
    	 	cin>>role;
    		
		}
};
class B: public A {
	public:
		void set2()
		{
			cout<<"enter your salary=";
    	 	cin>>salary;
    	 	cout<<"enter your experience=";
    	 	cin>>experience;
		}
};
class C: public B {
	public:
		void set3()
		{
			cout<<"enter your comp_name=";
    	 	cin>>comp_name;
			cout<<"enter your address=";
    	 	cin>>address;
			
		}
		void get1()
		{
		    cout<<"name="<<name<<endl;	
			cout<<"role="<<role<<endl;
			cout<<"salary="<<salary<<endl;
		}
};
class D: public C {
	public:
		void set4()
		{
			cout<<"enter your email=";
    	 	cin>>email;
    	 	cout<<"enter your contact=";
    	 	cin>>contact;
		}
		void get2()
		{
			cout<<"id="<<id<<endl;
		 	cout<<"name="<<name<<endl;
		 	cout<<"role="<<role<<endl;
		 	cout<<"salary="<<salary<<endl;
		 	cout<<"experience="<<experience<<endl;
		 	cout<<"address="<<address<<endl;
		 	cout<<"comp_name="<<comp_name<<endl;
		 	cout<<"email="<<email<<endl;
		 	cout<<"contact="<<contact<<endl;
		}
};
main() {
	
	D d1;
	d1.set1();
	d1.set2();
	d1.set3();
	d1.get2();
}

