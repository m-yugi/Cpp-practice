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
int delete_given(int a)
{
    int i;
	struct node* pointer=head;
	if(head==NULL)
	{
		printf("no list found");
	}
	else
	{
		for(i=1;i<a;i++)
		{
			pointer=pointer->next;
		}
		struct node *next1=pointer->next->next;
		delete(pointer->next);
		pointer->next=next1;	
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
	int a;
	printf("enter the number after you want to delete");
	scanf("%d",&a);
	delete_given(a);
	printf("after deletion\n");
	print();
	printf("\n");
}
