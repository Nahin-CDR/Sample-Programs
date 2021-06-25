//Nahin the Coder
//Date : 25 - 06 - 2021
#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Converting string to int
	
	string str = "Nahin the coder" ;
	stringstream ss(str);
	
	vector<char>ch;
	
	char x;
	while(ss>>x)
	{
		ch.push_back(x);
	}
	
	cout<<"Size : "<<ch.size()<<"\n";
	
	for(int i=0; i<ch.size(); i++)
	{
		cout<<ch[i]<<" ";
	}
	
	cout<<"\n\n";
	
	

	
	for(auto i : ch)
	{
		cout<<i<<" ";
	}
	
	
	
	
	return 0;
}
