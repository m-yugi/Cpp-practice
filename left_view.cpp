#include<iostream>
#include<stack>
using std::cout;
using std::stack;
struct node{
    int data;
    node* left;
    node* right;
};
node* newnode(int data){
    node* temp=new node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void leftview(node* root,stack<int> &s,int level=0){
    if(root==NULL){
        return;
    }
    if(level==s.size()){
        s.push(root->data);
    }
    leftview(root->left,s,level+1);
    leftview(root->right,s,level+1);
}
node* createtree(int arr[],node* root,int i,int n){
    if (i < n)
    {
        node* temp = newnode(arr[i]);
        root = temp;
 
        // insert left child
        root->left = createtree(arr,
                   root->left, 2 * i + 1, n);
 
        // insert right child
        root->right = createtree(arr,
                  root->right, 2 * i + 2, n);
    }
    return root;
}
void inorder(node* root){
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data <<" ";
        inorder(root->right);
    }
}
int main(){
    int arr[7]={4,2,5,1,6,3,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    node* root=createtree(arr,root,0,size);
    stack<int> s;
    leftview(root,s,0);
    while(!s.empty()){
        cout<<s.top()<<"\n";
        s.pop();
    }
    inorder(root);
}