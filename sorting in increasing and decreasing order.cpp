#include<bits/stdc++.h>
using namespace std;
 

 
int main()
{
	int arr[5] = {4,3,5,2,1};
	
	cout<<"without sorting :\n";
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	sort(arr,arr+5);
	
	cout<<"\nAfter sorting in increasing oroder :\n";
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<" ";
	}
	sort(arr,arr+5,greater<int>());
	cout<<"\nAfter sorting in decreasing order :\n";
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	

	return 0;
}
 
