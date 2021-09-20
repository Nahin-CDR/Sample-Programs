//Solver : Nahin the Coder
//Date : 20-09-2021
#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
    //multi set is a container that can store same element more than once and 
    //AND we can check if there exist any element for which we are searching
    //And we can delete all same elements 
    //And we can also delete one of the all same elements
    	
	multiset<int>ms;
	
	ms.insert(3);	
	ms.insert(3);
	ms.insert(4);
	ms.insert(4);
	ms.insert(34);
	ms.insert(32);
	ms.insert(23);
	ms.insert(213);
		
	
		
    for(auto it:ms)
	{
		cout<<it<<endl;
	}
	
	//delete one element from set from multiple same values
	//cause we have two 3 here
	ms.erase(ms.find(3));
	cout<<"\n\n";
		
	for(auto it:ms)
	{
		cout<<it<<endl;
	}
    cout<<"\n\n\n";
    //now we are going to delete all 4 elements
    //cause there are two 4 here
    
    ms.erase(4);
    
    for(auto it: ms)
    {
    	cout<<it<<endl;
	}
    
    
    
    
    
    
    
    
    
    
    
    
	
	return 0;
} 
