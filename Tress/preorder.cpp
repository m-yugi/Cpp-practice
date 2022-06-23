#include<iostream>
using namespace std;

struct node
{
int data;
struct node* left;
struct node* right;	
};
//struct node* root=NULL;
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
int preorderofroot(struct node* root)
{
	if(root==NULL)
	{
		return 0;
	}	
	else
	{
		cout<<root->data<<"->";
		preorderofroot(root->left);
		preorderofroot(root->right);
	}
}
int inorder(struct node* root)
{
	if(root==NULL)
	{
		return 0;
	}	
	else
	{
		inorder(root->left);
		cout<<root->data<<"->";
		inorder(root->right);
	}
}
int postorder(struct node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<"->";
	}
}
int main()
{
   	struct node* root=push();
   	cout<<"preorder travesal"<<endl;
   	preorderofroot(root);
   	cout<<"inorder traversal"<<endl;
   	inorder(root);
   	cout<<"post order traversal"<<endl;
   	postorder(root);
}
