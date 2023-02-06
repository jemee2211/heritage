#include<iostream>
#include<string.h>
using namespace std;
class mother 
{
	char name[100];
	int age;
	
	public:
		void set_value()
		{
			cout<<"Enter your name: = ";
			cin>>name;
			cout<<"enter your age: = ";
			cin>>age;
		}
		void get_value()
		{
			cout<<"Name ="<<name<<endl;
			cout<<"Age ="<<age<<endl;
		}
};

class animal: public mother
{
	char zebra[100];
	
	public:
		void set_zebra()
		{
			set_value();
			cout<<"zebra animal is a wild or not: = ";
			cin>>zebra;
		}
		void get_zebra()
		{
			get_value();
			cout<<"zebra is wild or not:"<<zebra<<endl;
		}
};

class sea: public animal
{
	char dolphin[100];
	
	public:
		void set_sea()
		{
			set_zebra();
			cout<<"dolphin is good fish or bad fish: = ";
			cin>>dolphin;
		}
		void get_sea()
		{
			get_zebra();
			cout<<"dolphin is good or bad: = "<<dolphin<<endl;
		}
};

main()
{
	sea s;
	s.set_sea();
	s.get_sea();
}

