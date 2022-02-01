#include<iostream>
#include<map>
#include<vector>
using std::cin;
using std::cout;
using std::map;
using std::vector;
struct node{
int val;
node *left,*right;
};
node* newnode(int x){
    node *temp= new node;
    temp->val=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;   
}
void print(node* root){
    if(root==NULL) return;
    cout<<root->val;
    print(root->left);
    print(root->right);
}
void vertical(node *root,int dis,map<int,vector<int>> &mp){
    if(root==NULL) return;
    mp[dis].push_back(root->val);
    vertical(root->left,dis-1,mp);
    vertical(root->right,dis+1,mp);
}
int main(){
    node *root=newnode(10);
    root->left=newnode(7);
    root->right=newnode(4);
    root->left->left=newnode(3);
    root->left->right=newnode(11);
    root->right->left=newnode(14);
    root->right->right=newnode(6);
    int dis=0;
    map<int,vector<int>> mp;
    vertical(root,dis,mp);
    print(root);
}