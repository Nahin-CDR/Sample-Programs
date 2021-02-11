#include<bits/stdc++.h>
using namespace std;

 
int main()
{
	map<int,vector<int> > mp;
	
	for(int i=0; i<5; i++)
	{
		int n;
		cin>>n;
		mp.insert(make_pair(n,vector<int>()));
	}
	
	mp[0].push_back(2);
	mp[0].push_back(5);

	mp[0].push_back(22);
	mp[0].push_back(12);
	
	mp[0].push_back(25);
	mp[0].push_back(59);
	
	
	mp[1].push_back(22);
	mp[1].push_back(12);
	
	mp[2].push_back(25);
	mp[2].push_back(59);
	
	
	
	int s = 0;
	for(auto it = mp.begin(); it!=mp.end(); it++)
	{
		
		for(int i=0; i<mp[s].size(); i++)
		{
			cout<<it->second[i]<<" ";
		}
		s++;
		cout<<"\n";
	}
	
	
	
	
	
	
	return 0;
}
 
