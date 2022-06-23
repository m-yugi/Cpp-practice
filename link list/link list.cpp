#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node* next;
};
struct node *head=NULL;
int insert_at_begger(int n)
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
int insert_after_givenpos(int n,int pos)
{
	int i;
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	struct node* pointer=head;
	newnode->data=n;
    for(i=1;i<pos;i++)
    {
    	pointer=pointer->next;
	}
	newnode->next=pointer->next;
	pointer->next=newnode;
}
int insert_at_end(int n)
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
}
int print()
{
	struct node* last=head;
	while(last!=NULL)
	{
		printf("%d ",last->data);
		last=last->next;
	}
	printf("\n");
}
int main()
{
	int y,n;
	while(1)
	{
	
	printf("where do you what to insert\n1.insert at beginning\n2.insert after the given point\n3.insert at the end\n4.print\n5.exit\n");
	scanf("%d",&y);
	switch(y)
	{
		case 1:
		    printf("enter the value\n");
		    scanf("%d",&n);
			insert_at_begger(n);
			break;
		case 2:
		    printf("enter the value\n");
		    scanf("%d",&n);
			int pos;
			printf("enter the position\n");
			scanf("%d",&pos);
			insert_after_givenpos(n,pos);
			break;
		case 3:
	     	printf("enter the value\n");
	    	scanf("%d",&n);
			insert_at_end(n);
			break;
		case 4:
			print();
			break;
		case 5:
			exit(0);
			break;
		default: printf("wrong choice!!!");
	}
    }
}
