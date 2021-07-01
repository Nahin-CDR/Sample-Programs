//Nahin the Coder
//Date : 01 - 07 - 2021

#include<bits/stdc++.h>
using namespace std;

#define MAX 2
int myQ[MAX];
int front = -1;
int rear = -1;

void enQ(int n)
{
	if((front == 0 and rear == MAX-1) or (front > rear))
	{
		cout<<"Q is fully loaded !\n\n";
	}
	else if(front == - 1 and rear == -1)
	{
		front = 0;
		rear = 0;
		myQ[rear] = n;
		cout<<"enQ Successful !\n\n";
	}
	else
	{
		rear++;
		myQ[rear] = n;
		cout<<"enQ Successful !\n\n";
	}
}


void deQ()
{
	if(front==-1 or rear == -1)
	{
		cout<<"Q is empty !\n\n";
	}
	else
	{
		cout<<"Deleted item is : "<<myQ[front]<<"\n\n";
		for(int i=0; i<rear; i++)
		{
			myQ[i] = myQ[i+1];
		}
		rear--;
	}
}


void display()
{
	if(front == -1 or rear == -1)
	{
		cout<<"Q is empty !\n\n";
	}
	else
	{
		for(int i=0; i<=rear; i++)
		{
			cout<<myQ[i]<<" ";
		}
		cout<<"\n\n";
	}

}


int main()
{
	ios::sync_with_stdio(false);
	
	int choice;
	cout<<"--------------------------------------------\n";
	cout<<"Welcome Master to your QUEUE DS PROGRAM\n\n\n";
	
	while(true)
	{
		cout<<"Press 1 to enQ   \n";
		cout<<"Press 2 to deQ   \n";
		cout<<"Press 3 to show  \n";
		cout<<"Press 4 to exit  \n\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		
		int item;
		switch(choice)
		{
			case 1 :
				cout<<"\n\nenQ Selected !\n";
				cout<<"\n\nEnter item : ";
				cin>>item;
				enQ(item);
			    break;
			
			case 2 :
				cout<<"\n\ndeQ Selected !\n";
				deQ();
			    break;
			    
			case 3 :
				cout<<"\n\nDisplay Selected!\n";
				display();
				break;
			
			case 4 :
				return 0;
				break;
				
			default :
				cout<<"Wrong input detected !\n\n";
			    break;
		}
	}
	
	
	
	return 0;
}
