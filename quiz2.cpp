#include<iostream>
using namespace std;
int main()
{
	string name;
	int option,count=0;
	cout<<"WELCOME TO CPP QUIZE GAME\n";
	cout<<"Enter your name :\t";
	getline(cin,name);
	cout<<"let's start our game\n\n";
	cout<<"-------------------------------------------------------\n";
	cout<<"Q1.Which of the following members of base class \nare accessed by object of derived class in \npublic inheritance?\n\n";
	cout<<"options:\n1 private members.\n2.protected members\n3.public members\n4.2 and 3 both\n";
	cout<<"Enter the option\n";
	cin>>option;
	if(option==3)
	{
		cout<<"correct\n";
		count++;
	}
	else
	{
		cout<<"false\n";
	}
	cout<<"-------------------------------------------------------\n";
	cout<<"Q2.Which of the following is not valid concept in c++\n\n";
	cout<<"options:\n1.virtual destructor \n2.deep copy\n3.friend constructor\n4.disinheritance\n";
	cout<<"Enter the option\n";
	cin>>option;
	if(option==3)
	{
		cout<<"correct\n";
		count++;
	}
	else
	{
		cout<<"false\n";
	}
	
	cout<<"-------------------------------------------------------\n";
	cout<<"Q3.Which of the following is not a member of a class\n\n";
	cout<<"options:\n1.virtual function\n2.const function\n3.static function\n4.friend function\n";
	cout<<"Enter the option\n";
	cin>>option;
	if(option==4)
	{
		cout<<"correct\n";
		count++;
	}
	else
	{
		cout<<"false\n";
	}
	cout<<"-------------------------------------------------------\n";
	cout<<"Q4.Storage class keyword used that have the global space\n\n";
	cout<<"options:\n1.extern\n2.static\n3.reister\n4.auto\n";
	cout<<"Enter the option\n";
	cin>>option;
	if(option==1)
	{
		cout<<"correct\n";
		count++;
	}
	else
	{
		cout<<"false\n";
	}
	cout<<"-------------------------------------------------------\n";
	cout<<"Q5.Correct range of char type variable\n";
	cout<<"options:\n1.-256 to 255\n2.-128 to 127\n3.0 to 255\n4.0 to 127\n\n";
	cout<<"Enter the option\n";
	cin>>option;
	if(option==2)
	{
		cout<<"correct\n";
		count++;
	}
	else
	{
		cout<<"false\n";
	}
	cout<<"-------------------------------------------------------\n";
	cout<<"Q6.Using which of the following keyword can an exception\n be generated?\n\n";
	cout<<"options:\n1.throws\n2.raise \n3.catch\n4.throw\n";
	cout<<"Enter the option\n";
	cin>>option;
	if(option==4)
	{
		cout<<"correct\n";
		count++;
	}
	else
	{
		cout<<"false\n";
	}
	cout<<"-------------------------------------------------------\n";
	cout<<"Q7.Choose the correct default return type of the function?\n\n";
	cout<<"options:\n1.int\n2.void\n3.char \n4.void*\n";
	cout<<"Enter the option\n";
	cin>>option;
	if(option==1)
	{
		cout<<"correct\n";
		count++;
	}
	else
	{
		cout<<"false\n";
	}
	cout<<"-------------------------------------------------------\n";
	cout<<"Q8.How many constructors are implicitly available in your class,\nwhen you have provided paramiterized constructor?\n\n";
	cout<<"options:\n1.0\n2.1\n3.2\n4.3\n";
	cout<<"Enter the option\n";
	cin>>option;
	if(option==2)
	{
		cout<<"correct\n";
		count++;
	}
	else
	{
		cout<<"false\n";
	}
	cout<<"-------------------------------------------------------\n";
	cout<<"Q9.Which of the following operator can not be overloaded in c++?\n\n";
	cout<<"options:\n1.[]\n2.()\n3.new\n4.sizeof\n";
	cout<<"Enter the option\n";
	cin>>option;
	if(option==4)
	{
		cout<<"correct\n";
		count++;
	}
	else
	{
		cout<<"false\n";
	}
	cout<<"-------------------------------------------------------\n";
	cout<<"Q10.this pointer is available in :    \n\n";
	cout<<"options:\n1.constructor\n2.copy constructor\n3.instance member\n4.static function\n";
	cout<<"Enter the option\n";
	cin>>option;
	if(option==4)
	{
		cout<<"correct\n";
		count++;
	}
	else
	{
		cout<<"false\n";
	}
	cout<<name<<" your total score is \t"<<count;
	return 0;
}
