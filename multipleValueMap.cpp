#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<int,vector<int> >mp;
	
	for(int i=0; i<5; i++)
	{
		int n;
		cin>>n;
		mp.insert(make_pair(n,vector<int>()));
		for(int j=0; j<5; j++)
		{
			int k;
			cin>>k;
			mp[n].push_back(k);
		}
	}
	
	
	cout<<"\n\n\n\n";
	
	for(auto it = mp.begin(); it!=mp.end(); it++)
	{
		cout<<it->first<<"\n";
		
		int len = it->first; // length of every single array vector
		
		for(int i=0; i<mp[len].size(); i++)
		{
			cout<<it->second[i]<<" ";
		}
		cout<<"\n";
	}
	
	
	return 0;
}
