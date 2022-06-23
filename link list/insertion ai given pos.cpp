
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* head=NULL;
int push(int n)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=n;
	if(head==NULL)
	{
		new_node->next=NULL;
		head=new_node;
	}
	else
	{
		struct node* pointer=head;
		while(pointer->next!=NULL)
		{
			pointer=pointer->next;
		}
		pointer->next=new_node;
		new_node->next=NULL;
	}
	return 0;
}
int insert(int val,int pos)
{
	int i;
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	struct node* pointer=head;
	newnode->data=val;
    for(i=1;i<pos;i++)
    {
    	pointer=pointer->next;
	}
	newnode->next=pointer->next;
	pointer->next=newnode;
}
int print()
{
	struct node* last=head;
	while(last!=NULL)
	{
		printf("%d ",last->data);
		last=last->next;
	}
	return 0;
}
int main()
{
  while(1)
  {
	int n;
	printf("enter the value\n");
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
  int pos,val;
  	printf("enter the position");
	scanf("%d",&pos);
	printf("enter the value");
	scanf("%d",&val);
	insert(val,pos);
	
	
print();
return 0;		
}
