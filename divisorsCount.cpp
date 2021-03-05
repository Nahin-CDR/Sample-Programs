
#include<bits/stdc++.h>
using namespace std;

int Divisors(int n)
{
	int count = 0;
	for(int i=1; i*i<=n; i++)
	{
		if(i*i==n)
		{
			count++;
		}
		else if(n%i==0)
		{
			count = count+2;
		}
	}
	
	return count;
}

//driver program
int main()
{
	int n;
	cin>>n;
	
	int count = Divisors(n);
	cout<<count;
	
	return 0;
}
