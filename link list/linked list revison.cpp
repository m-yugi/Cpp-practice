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
	while(1)
	{
		int n;
		cout<<"enter the value";
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
