//WAP with a mother class and an inherited daugther class.Both of them should
// have a method void display ()that prints a message (different for mother and daugther). 
// In the main define a daughter and call the display() method on it.

#include<iostream>
using namespace std;

class mother{
	
	private:
		char a[50];
		
		public:
			
			void set(){
				
				cout<<"Mother"<<endl;
			}
	
	
};

class daughter : public mother{
	public:
	void display(){
		
		cout<<"Daughter"<<endl;
		
	}
	
	
	
};

main(){
	
	daughter h;
	h.set();
	h.display();
}
