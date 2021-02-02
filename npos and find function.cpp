#include<bits/stdc++.h>
using namespace std;


int main()
{
    string number = "1234444789";
    
    
    //returns true if found
    if(number.find("444"))
    {
    	cout<<"yes";
	}
	else
	{
		cout<<"NO";
	}

    if(number.find("444") == number.npos) 
	// that means if "444" has no position in my string . in this case this condition will return false
    //because we have "444" in our string but on the other hand find() function will return us true 
    // as true is not equal to false then this statement under if condition will not be executed. 
    //and "NO "will be printed
	{
    	cout<<"yes";
	}
	else
	{
		cout<<"NO";
	}



    return 0;
}
