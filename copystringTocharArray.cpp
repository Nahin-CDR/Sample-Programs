#include<iostream>

#include<cstring>
using namespace std;

int main()
{
    string mystring;
    cin>>mystring;

    int mystring_size;
    mystring_size = mystring.size() + 1 ;

    char myarray[mystring_size];

    strcpy(myarray,mystring.c_str());

    for(int i = 0; i<mystring_size; i++)
    {
        cout<<myarray[i]<<" ";
    }


    return 0;
}
