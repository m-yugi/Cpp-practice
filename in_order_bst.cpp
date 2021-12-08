#include<iostream>
#include<queue>
using std::cin;
using std::cout;
using std::endl;
using std::queue;
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
btree* insert(btree* root,int data){
    if(root==NULL){
        root=newnode(data);
    }
    else if(data<=root->data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
    return root;
}
int search(btree* root,int data){
    if(root==NULL){
        return 0;
    }
    if(data==root->data){
        return 1;
    }
    else if(data<=root->data){
        return search(root->left,data);
    }
    else{
        return search(root->right,data);
    }
    return 0;
}
int mini(btree* root){
    if(root==NULL){
        return 0;
    }
    else{
        while(root->left!=NULL){
            root=root->left;
        }
    }
    return root->data;
}
int maxi(btree* root){
        if(root==NULL){
        return 0;
    }
    else{
        while(root->right!=NULL){
            root=root->right;
        }
    }
    return root->data;
}
void in_order(btree* root){
    queue<btree*> q;
    if(root==NULL){
        return ;
    }
    q.push(root);
    while(!q.empty()){
        btree* curr=q.front();
        q.pop();
        cout<<curr->data<<endl;
    if(curr->left!=NULL){
        q.push(curr->left);
    }
    if(curr->right!=NULL){
        q.push(curr->right);
    }
    }
}
int main(){
 btree* root=NULL;
    int flag=1,u,n,s;
    while (flag)
    {
    printf("pls select the options below\n 1.insert\n 2.search\n 3.max element\n 4.min element\n 5.in_order print \n 6.exit\n");
    scanf("%d",&u);
    switch(u){
        case 1:
        printf("pls enter the value to insert in tree\n");
        scanf("%d",&n);
        root=insert(root,n);
        break;
        case 2:
        printf("enter the value to search\n");
        scanf("%d",&s);
        if(search(root,s)){
            printf("true\n");
        }
        else{
            printf("false\n");
        }
        break;
        case 3:
        printf("%d is the max element\n",maxi(root));
        break;
        case 4:
        printf("%d is the min element\n",mini(root));
        break;
        case 5:
        in_order(root);
        break;
        case 6:
        flag=0;
        break;
        default:
        printf("pls enter a valid input\n");
        break;
    }
}
}