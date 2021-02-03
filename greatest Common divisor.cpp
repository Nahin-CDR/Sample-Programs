#include<bits/stdc++.h>
using namespace std;

//finding greatest common divisor among 2 integer number

int gcd(int a,int b)
{
	if(a==0)
	{
		return b;
	}
	else
	{
		return gcd(b%a,a);
	}
}



int main()
{
    int n1,n2;
    cin>>n1>>n2;
    
    cout<<gcd(n1,n2);


    return 0;
}
