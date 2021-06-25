//Nahin The Coder
//17-06-2021

#include<bits/stdc++.h>
using namespace std;

struct Storage{
	string name;
	int roll;
	float marks;
}; 
  



int main()
{
	cout<<"Welcome MASTER !\nTo your structure learning program :\n";
	struct Storage container[2] = {  {"nahin",01,100.00 }, {"kaspia",02,33.33 } };
	
	cout<<"\n\n";
	
	cout<<"Total details :\n\n";
	
	for(int i=0; i<2; i++)
	{
		cout<<"Student no : "<<i+1<<"\n";
		cout<<"Name : "<<container[i].name<<"\n";
		cout<<"Roll : "<<container[i].roll<<"\n";
		cout<<"Marks : "<<container[i].marks<<"\n";
		cout<<"---------------------------------\n\n";
	}
	

	return 0;
}
