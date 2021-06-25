//Nahin The Coder
//26-06-2021

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
	struct Storage container[2];
	
	for(int i=0; i<2; i++)
	{
		cout<<"Enter the details of student "<<i+1<<" :\n";
		
		cout<<"Name : ";    cin>>container[i].name;
		cout<<"\nRoll : ";  cin>>container[i].roll;
		cout<<"\nMarks : "; cin>>container[i].marks;
	}
	
	cout<<"\n\n";
	
	cout<<"Total details :\n";
	
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
