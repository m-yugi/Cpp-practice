#include<iostream>
using namespace std;
struct node 
{
int data;
struct node* next;	
};
struct node* head=NULL;
int push(int n)
{
	struct node* newnode= new struct node;
	newnode->data=n;
	if(head==NULL)
	{
		head=newnode;
		newnode->next=NULL;
	}
	else
	{
		struct node* pointer=head;
		while(pointer->next!=NULL)
		{
			pointer=pointer->next;
		}
		pointer->next=newnode;
		newnode->next=NULL;
	}
}
int print()
{
	struct node* pointer=head;
	while(pointer!=NULL)
	{
		cout<<pointer->data;
		pointer=pointer->next;
	}
}

int main()
{
	int n;
	while(1)
	{
		cout<<"enter the value"<<endl;
		cin>>n;
		if(n>0)
		{
			push(n);
		}
		else
		{
			break;
		}
	}
	print();
}
