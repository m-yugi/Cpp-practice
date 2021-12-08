#include<iostream>
using std::cin;
using std::cout;
using std::endl;
struct btree{
    int data;
    btree* left;
    btree* right;
};
btree* newnode(int data){
    btree* temp=new btree();
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
btree* insert(){
    int d;
    cin>>d;
    btree* root;
    if(d==-1){
        return NULL;
    }
    root=newnode(d);
    root->left=insert();
    root->right=insert();
    return root;
}
void print(btree* root){
    if(root==NULL){
        return;
    }
    print(root->left);
    cout<<root->data<<endl;
    print(root->right);
}
bool is_bst(btree* root,int max_value,int min_value){
    if(root==NULL){
        return true;
    }
    if(root->data>min_value && root->data<max_value && is_bst(root->left,min_value,root->data) && is_bst(root->right,root->data,max_value)){
        return true;
    }
    else{
        return false;
    }
}
bool initial(btree* root){
    return is_bst(root,INT_MAX,INT_MIN);
}
int main(){
 btree* root=insert();
 print(root);
 cout<<initial(root);
 return 0;
}