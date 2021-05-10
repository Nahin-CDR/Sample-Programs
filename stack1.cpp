#include<iostream>
#include<stack>
using namespace std;

//Learning Stack in C++
//Nahin the Coder
//Date : 10 - 05 - 2021




int main()
{
	
	stack<int>st;
	
	for(int i=1; i<=10; i++)
	{
		st.push(i);
	}
	
	for(int i=1; i<=10; i++)
	{
		cout<<st.top()<<"\n";
		st.pop();
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
