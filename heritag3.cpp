#include<iostream>
#include<string.h>
using namespace std;

class A
   {
   	    public:
   	    	int id;
   	  	    char name[100];
   	        char role[100];
   	        
   	    void setA() {
   	    	cout<<"enter your id=";
    	 	cin>>id;
    	 	cout<<"enter your name=";
    	 	cin>>name;
    	 	cout<<"enter your role=";
    	 	cin>>role;
		   }
   };
class B
   {
   	    public:
   	    	int salary;
   	        int experience;
   	    
   	    void setB() {
   	    	cout<<"enter your salary=";
    	 	cin>>salary;
    	 	cout<<"enter your experience=";
    	 	cin>>experience;
		   }
   };
class C : public A, public B {
	    public:
	    	void getAB() {
	    		cout<<"id="<<id<<endl;
		 	    cout<<"name="<<name<<endl;
		 	    cout<<"role="<<role<<endl;
		 	    cout<<"salary="<<salary<<endl;
		 	    cout<<"experience="<<experience<<endl;
			}
			
};
main() {
	
	    C c;
	    c.setA();
		c.setB();
		c.getAB();
}

