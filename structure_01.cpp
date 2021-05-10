#include<iostream>
using namespace std;

//Learning Structure in C++
//Nahin the Coder
//Date : 10 - 05 - 2021

struct address
{
	string name;
	int age;
    int phone;
	
};


int main()
{
	
	struct address a
	{
		"nahin",
		27,
		1790828094
	};
	
	cout<<"My Stored elements : \n\n\n";
	
	
	cout<<"My name is = "<<a.name<<endl;
	cout<<"My age is = "<<a.age<<endl;
	cout<<"My phone is = "<<a.phone<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
