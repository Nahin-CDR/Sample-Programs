//Nahin the Coder
//Date : 26 - 06 - 2021

#include<bits/stdc++.h>
using namespace std;

#define MAX 2
int myStack[MAX];
int counter = -1 ;

void push(int n)
{
    if(counter<MAX-1)
    {
        myStack[++counter] = n;
        cout<<"Element pushed to stack successfully !\n";
    }
    else
    {
        cout<<"OPPS!! stack is full !\nOperation unsuccessful\n";
    }
}


void pop()
{
    if(counter>=0)
    {
        counter = counter - 1;
        cout<<"POP operation successful !\n";
    }
    else
    {
        cout<<"STACK is already empty! Operation unsuccessful\n";
    }
}


void isEmpty()
{
    if(counter < 0)
    {
        cout<<"STACK is empty !\n";
    }
    else
    {
        cout<<"STACK is not empty !\n";
    }
}


void showTOP()
{
    if(counter >= 0)
    {
        cout<<"Currently "<<myStack[counter]<<" is top on your stack \n";
    }
    else
    {
        cout<<"OPPS ! Stack is empty , push elements first !\n";
    }
}


void display()
{
    if(counter>=0)
    {
        cout<<"Currently elements on the stack :\n";
        for(int i=counter; i>=0; i--)
        {
            cout<<myStack[i]<<" ";
        }
        cout<<"\n";
    }
    else
    {
        cout<<"OPPS ! Stack is empty ! Push elements first \n";
    }
}


void isFull()
{
    if(counter>=MAX)
    {
        cout<<"Stack is full !\n";
    }
    else
    {
        cout<<"Currently you can push "<<MAX-counter-1<<" elements to stack\n";
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cout<<"---------------------------------------------------------------\n";
    cout<<"MASTER !\nWelcome to your STACK implementation program :\n\n";
    cout<<"---------------------------------------------------------------\n";
    
    int choice;

    while (true)
    {
        cout<<"STACK OPERATION :\n";
        cout<<"Press 1 to push element to stack |\n";
        cout<<"Press 2 to pop element from stack |\n";
        cout<<"Press 3 to check is stack is empty |\n";
        cout<<"Press 4 to show the top element |\n";
        cout<<"Press 5 to display the full stack |\n";
        cout<<"Press 6 to check is the stack is full |\n";
        cout<<"Press 0 to exit from the STACK OPERATION pragram |\n";
        cout<<"-----------------------------------------------------\n";
        cout<<"Give your choice : "; cin>>choice;
        cout<<"\n\n";
        
        if(choice == 1){
            
            cout<<"PUSH operation selected !\n";
            int number;
            cout<<"Enter number to PUSH "; cin>>number;
            push(number);
        }else if (choice == 2){
            
            cout<<"POP operation selected !\n";
            pop();

        }else if(choice == 3){
               
            cout<<"CHECK operation is selected !\n";
            isEmpty();

        }else if(choice == 4){
            
            cout<<"SHOWING TOP element operation is selected !\n";
            showTOP();

        }else if(choice == 5){

            cout<<"DISPLAY full stack operation is selected !\n";
            display();
        }else if(choice == 6){

            cout<<"CHECKING if the stack if full operation selected !\n";
            isFull();

        }else if(choice == 0){

            return 0;
        }
        else{
        	cout<<"Wrong input detected !\n";
		}
        cout<<"\n\n\n";
    }
    
    
    return 0;
}
