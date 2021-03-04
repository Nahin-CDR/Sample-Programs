#include<bits/stdc++.h>
using namespace std;


void seive(int n)
{
	bool arr[n+1];
	memset(arr,true,sizeof(arr));
	for(int i=2; i*i<=n; i++)
	{
		if(arr[i]==true)
		{
			for(int j = i*2; j<=n; j=j+i)
			{
				arr[j] = false;
			}
		}
	}
	
	for(int i=2; i<=n; i++)
	{
		if(arr[i])
		{
			cout<<i<<" ";
		}
	}
}


int main()
{
	int n;
	cin>>n;
    seive(n);	
	
	return 0;
}
