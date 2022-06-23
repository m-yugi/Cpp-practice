#include<iostream>
using namespace std;
struct node
{
int data;
struct node* left;
struct node* right;	
};
int queue[30];
int MAXSIZE=30;
int rear=-1;
int front=-1;
int enqueue(int n)
{
	 if(rear==MAXSIZE-1)
	 {
	 	cout<<"full get lost";
	 }
	 else
	 {
	 	if(front==-1)
	 	{
	 		front=0;
		 }
		 rear++;
		 queue[rear]=n;
	 }
}
int dequeue()
{
	int temp;
	if(front==rear==-1)
	{
		cout<<"im empty please give me something";
	}
	else if(front==rear)
	{
		cout<<queue[rear];
		front=rear=-1;
		
	}
	else
	{
	  temp=queue[front];
	  front++;
	}
return temp;
}
struct node* newNode(int data) 
{ 
    struct node* Node = new struct node();
    Node->data = data; 
    Node->left = NULL; 
    Node->right = NULL; 
 
    return(Node); 
} 
 
int main()
{
 struct node *root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5);
	struct node* pointer=root;
while(pointer!=NULL)
{
	cout<<pointer->data;
	if(pointer->left!=NULL)
	{
		enqueue(pointer->left->data);
	}	
	if(pointer->right!=NULL)
	{
		enqueue(pointer->right->data);
	}
	if(front!=-1 && rear!=-1)
	{
		struct node* newnode=root;
		int a;
		a=dequeue();
		if(pointer->left->data==a)
		{
			pointer=pointer->left;
		}	
		else
		{
			pointer=pointer->right;
		}		
	}
	else
	{
		pointer=NULL;	
	}
} 
    
 	
}

