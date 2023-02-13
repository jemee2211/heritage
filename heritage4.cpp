//WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.

#include<iostream>
using namespace std;
class number{
	
	public:
		int sqr;
		int cube;
		int num1;
		
	public:
		
	void n1(){
		cout<<"Enter number:";
		cin>>num1;
		
		
	}
	
};

class number2: public number{
	public:
	void n2(){
		sqr = num1*num1;
		
		cout<<"squar = "<<sqr<<endl;
	}	
};
class number3 : public number{
	
	public:
	void n3(){
		
		cube = num1*num1*num1;
		
		cout<<"cube = "<<cube<<endl;
	
}
};

main(){
	
	number2 j1;
	number3 j2;
	
	j1.n1();
	j1.n2();
	
	j2.n1();
	j2.n3();
	
}
