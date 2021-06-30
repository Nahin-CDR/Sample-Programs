//Nahin the Coder
//Date : 30 - 06 -2021


#include<bits/stdc++.h>
using namespace std;

#define MAX 2
int myQ[MAX];

int front = -1;
int rear = -1;

void enQ(int n)
{        
    //when  Q is full                  
	if((front == 0 and rear == MAX-1 ) or front == rear+1)
	{
		cout<<"Q is fully loaded !\n\n\n";
	}
	else if(front == -1 and rear == -1)
	{
		rear = 0;
		front = 0;
		myQ[rear] = n;
		cout<<"EnQ successful !\n\n\n";
	}
	else if(rear == MAX-1)
	{
		rear = 0;
		myQ[rear] = n;
		cout<<"EnQ successful !\n\n\n";
	}
	else
	{
		rear++;
		myQ[rear] = n;
		cout<<"EnQ successful !\n\n\n";
	}
}

void deQ()
{
	if(front == -1 )
	{
		cout<<"Q is empty !\n\n\n";
	}
	else if(front == rear)
	{
		cout<<"Deleted item is : "<<myQ[front]<<"\n\n\n";
		front = -1;
		rear = -1;
	}
	else if(front == MAX - 1)
	{
		cout<<"Deleted item is : "<<myQ[front]<<"\n\n\n";
		front = 0;
	}
	else
	{
		cout<<"Deleted item is : "<<myQ[front]<<"\n\n\n";
		front++;
	}
}

void display()
{
	if(front == -1)
	{
		cout<<"Nothing to display , Q empty !\n\n\n";
	}
	else if(front<rear)
	{
		int i = front;
		while(i<=rear)
		{
			cout<<myQ[i]<<" ";
			i++;
		}
		cout<<"\n\n\n";
	}
	else if(rear<front)
	{
		int i = front;
		while(i<=MAX-1)
		{
			cout<<myQ[i]<<" ";
			i++;
		}
		i = 0;
		while(i<=rear)
		{
			cout<<myQ[i]<<" ";
			i++;
		}
		cout<<"\n\n\n";
	}
	else
	{
		cout<<myQ[front]<<"\n\n\n";
	}
	
}




int main()
{
	cout<<"Welcome !\n";
	int choice;
	
	while(true)
	{
		cout<<"1 -> EnQ\n";
		cout<<"2 -> DeQ\n";
		cout<<"3 -> Show\n";
		cout<<"4 -> Exit\n";
		cout<<"Enter your choice : "; cin>>choice;
		
		int item;
		
		switch(choice){
			case 1 :
				cout<<"EnQ SELECTED !\n";
				cout<<"Give item : "; cin>>item;
				enQ(item);
				break;	
			case 2 :
				cout<<"DeQ SELECTED !\n";
				deQ();
				break;
			case 3 :
				cout<<"Display SELECTED !\n";
				display();
			    break;
			default :
				cout<<"ENd";
			    break;
		}
	}
	
	
	
}

