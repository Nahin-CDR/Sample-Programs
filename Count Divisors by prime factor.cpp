#include<bits/stdc++.h>
using namespace std;
 
 
//Solver : Nahin the Coder
//Date   : 05-03-2021
 
vector<int>v;


int Divisors(int n)
{
	int divisors = 1;
	for(int i=0; i<v.size(); i++)
	{
		if(n%v[i]==0)
		{
			int cnt = 1;
			while(n%v[i] == 0)
			{
				n = n/v[i];
				cout<<n<<" ";
				cnt++;
			}
			divisors = divisors*cnt;
			cout<<"\n"<<divisors<<"\n----\n";
		}
	}
	
	return divisors;
}
 
int main()
{
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin>>n;
	
	v.push_back(2);
	
	v.push_back(3);
	
	v.push_back(5);
	
	v.push_back(7);
	
	v.push_back(11);
	
	v.push_back(13);
	
	v.push_back(17);
	
	v.push_back(19);
	
	v.push_back(23);
	
	v.push_back(29);
	
	v.push_back(31);
	
	int div = Divisors(n);	
	
	
	
	
	cout<<div;
	
	
	
	
	return 0;
}
