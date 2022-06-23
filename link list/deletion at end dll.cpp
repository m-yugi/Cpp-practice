#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	struct node* prev;
	int data;
	struct node* next;
};
struct node* head=NULL;
int push(int n)
{
struct node* newnode=((struct node*)malloc(sizeof(struct node)));
newnode->data=n;
if(head==NULL)
{
	newnode->next=NULL;
	newnode->prev=NULL;
	head=newnode;
}
else
{
	struct node *pointer=head;
	while(pointer->next!=NULL)
	{
		pointer=pointer->next;
	}
	newnode->next=NULL;
	newnode->prev=pointer;
	pointer->next=newnode;
}
}
int deletionend()
{
	struct node* pointer=head;
	while(pointer->next!=NULL)
	{
		pointer=pointer->next;
	}
	pointer->prev->next=NULL;
	delete(pointer);
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
printf("\n before deletion \n");
print();
printf("\n after deletion \n");
deletionend();
print();
}
