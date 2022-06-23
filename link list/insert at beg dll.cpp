#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* prev;
	struct node* next;	
};
struct node* head=NULL;
int push(int n)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=n;
	if(head==NULL)
	{
		newnode->next=NULL;
		newnode->prev=NULL;
		head=newnode;	
	}
	else
	{
		newnode->prev=NULL;
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
	}
}
int print()
{
	struct node* pointer=head;
	while(pointer!=NULL)
	{
		printf("%d",pointer->data);
		pointer=pointer->next;
	}
}
int main()
{
	int n;
	while(1)
	{
 		printf("enter the value");
		scanf("%d",&n);
		
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

