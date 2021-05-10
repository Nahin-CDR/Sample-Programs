#include<bits/stdc++.h>
using namespace std;

//Learning Call by value and call by refference
//Nahin the Coder
//Date : 10-05-2021


int myFunction(int *a,int *b)
{
	*a = 100;
	*b = 200;
}

int ref(int n,int m)
{
	n = 201;
	m = 101;
}



int main()
{
	int a = 200;
	int b = 100;
	myFunction(&a,&b); //Call by refference 
	
	cout<<"-------call by refference-----\n";
	cout<<a<<" "<<b;
	
	cout<<"\n\n-------call by value-------\n";
	
	int n = 101;
	int m = 201;
	
	ref(n,m); //Call by value
	
	cout<<n<<" "<<m;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
