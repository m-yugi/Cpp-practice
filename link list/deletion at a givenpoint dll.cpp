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
int deletiongiven(int a)
{
	struct node* pointer=head;
	while(pointer->data!=a)
	{
		pointer=pointer->next;
	}
	pointer->prev->next=pointer->next;
	pointer->next->prev=pointer->prev;
	delete(pointer);
}
int deleteatpos(int b)
{
	int i;
	struct node* pointer=head;
	for(i=1;i<=b;i++)
	{
		pointer=pointer->next;
	}
	pointer->prev->next=pointer->next;
	pointer->next->prev=pointer->prev;
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
printf("enter the value\n");
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
int a,b;
printf("\n enter the position you want to delete \n");
scanf("%d",&b);
deleteatpos(b);
printf("\n ater pos deletion\n");
print();
printf("\n enter the value you want to delete \n");
scanf("%d",&a);
deletiongiven(a);
print();

}
