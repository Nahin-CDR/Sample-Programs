#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n = 12;
	int sum = 0;
	int m;
	while(n>0)
	{
		m = n%10;
		sum = sum + m;
		n = n/10;
	}
	cout<<sum;
	
	
	
	return 0;
}
