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
int insertatgive( int a,int b)
{
	int i;
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=b;	
	struct node* pointer=head;
	for(i=1;i<a;i++)
	{
		pointer=pointer->next;
	}
	newnode->next=pointer->next;
	newnode->prev=pointer;
	pointer->next->prev=newnode;
	pointer->next=newnode;
	
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
printf("before insertion \n");
print();
int a,b;
printf("\n enter the position of insertion \n");
scanf("%d",&a);
printf("enter the value you want to insert \n");
scanf("%d",&b);
insertatgive(a,b);
printf("after insertion \n");
print();
}
