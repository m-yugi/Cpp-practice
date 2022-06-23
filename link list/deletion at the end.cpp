#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node *head=NULL;
int push(int n)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=n;
	if(head==NULL)
	{
		newnode->next=NULL;
		head=newnode;
	}
	else
	{
	  newnode->next=head;
	  head=newnode;
	}
}
int delete_end()
{
	struct node* pointer=head;
	if(head==NULL)
	{
		printf(" no list found");
	}
	else
	{
		while(pointer->next->next!=NULL)
		{
			pointer=pointer->next;
		}
		delete(pointer->next);
		pointer->next=NULL;
	} 
}
int print()
{
	struct node* current=head;
	while(current!=NULL)
	{
		printf("%d",current->data);
		current=current->next;
	}
}
int main()
{
	while(1)
	{
	int n;
	printf("enter the value");
	scanf("%d",&n);
	if(n>=0)
	{
	push(n);
    }
    else
    {
    	break;
	}
    }
	print();
	printf("\n");
	 delete_end();
	 print();
	 
}
