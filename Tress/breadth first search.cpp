#include<iostream>
using namespace std;
struct node
{
int data;
struct node* left;
struct node* right;	
};
struct node* push()
{
	int n;
	struct node* p;
	cout<< "enter the value " <<endl;
	cin>>n;
	if(n<0)
	{
		return NULL;
	}
	else
	{
	p = new struct node;	
	p->data=n;
	cout<<"enter left child \n";
	p->left=push();
	cout<<"enter the right child \n";
	p->right=push();
    }
	return p;
}
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
int main()
{
struct node* root=push();
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
		while(newnode!=NULL)
		{
			
		}
				
	}
	else
	{
		pointer=NULL;
		
	}
}
}
