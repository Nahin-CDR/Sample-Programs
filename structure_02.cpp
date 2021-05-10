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
	
	//Using Pointer
	//we will initialize a pointer to our structure
	
	cout<<"My Stored elements : \n\n\n";
	
	struct address* mypoint = &a;
	
	cout<<"My name is = "<<mypoint->name<<endl;
	cout<<"My age is = "<<mypoint->age<<endl;
	cout<<"My phone is = "<<mypoint->phone<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
