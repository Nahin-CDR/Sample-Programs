//Nahin the Coder
//Date : 18-09-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s = "abc";
	while(next_permutation(s.begin(),s.end()))  
	{
		cout<<s<<endl;
	}
	return 0;
}
