#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v = { 1, 2, 3, 3, 3, 10, 1, 2, 3, 7, 7, 8 };
	
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n After Sorting \n";
	
	sort(v.begin(),v.end());
	
	for(int i:v)
	{
		cout<<i<<" ";
	}
	//Now taking an iterator
	
	vector<int>::iterator it;
	it = unique(v.begin(),v.end());
	
	cout<<"\nAfter taking unique elements :\n";
	
	for(int i:v)
	{
		cout<<i<<" ";
	}
    
		
	cout<<"\nNow we are going to remove extra elements :\n";

	v.resize(distance(v.begin(),it));
	for(it = v.begin(); it != v.end(); it++)
	{
		cout<<*it<<" ";
	}
	
	return 0;
}
