
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
int rotate(int key)
{
	int count=0;
	while(count!=key)
	{
		struct node *t=head;
	    struct node *prev=NULL;
	    while(t->next!=NULL)
	    {
	    	prev=t;
	    	t=t->next;
		}
		prev->next=NULL;
		t->next=head;
		head=t;	
		count++;
	}
	
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
  printf("before rotation\n");	
print();
int key;
printf("enter key\n");
scanf("%d",&key);
rotate(key);
printf("after rotation\n");
print();
return 0;		
}
