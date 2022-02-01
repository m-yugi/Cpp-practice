#include<iostream>
using std::cout;
class node{
public:
    int val;
    node *left;
    node *right;
public:
    node(int data){
         val=data;
         left=right=NULL;
    }
};
void print(node *root){
    if(!root) return;
    cout<<root->val;
    print(root->left);
    print(root->right);
}
int main(){
    node *root= new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right= new node(5);
    root->right->left= new node(6);
    root->right->left= new node(7);
    print(root);
}