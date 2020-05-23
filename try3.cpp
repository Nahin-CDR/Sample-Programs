#include<iostream>
using namespace std;

//Solver : Nahin the Coder
//Date   : 23-05-2020
//Time   : 01:49 am


int numberSize(int number)
{
    int temp;
    int counter = 0;


    // Store to temporary variable.
    temp = number;

    while(temp != 0) {

        // Increment counter
        counter++;

        // Remove last digit of 'temp'
        temp /= 10;

    }

    return counter;

}

int power(int p)
{
    int pw = 1;
    while(p--)
    {
        pw = pw*10;
    }

    return pw;

}
int main()
{
   int number;
   cin>>number;

   int len = numberSize(number);




    int arr[len];
    int temp;




    int digit = 0;
    for(int i = len-1; i>=0; i--)
    {
        temp = number/power(i);
        arr[digit++] = temp%10;

    }


    for(int i = 0; i<len; i++)
    {
       cout<<arr[i]<<" ";
    }





    return 0;
}
