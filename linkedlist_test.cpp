#include<iostream>
using std::cin;
using std::cout;
struct node{
  int data;
  node* next;
};
node* adj_roto(node* head){
    node* ptr1=head;
    node* ptr2=head->next;
    while (ptr1!=NULL && ptr1->next!=NULL)
    {
        int temp=ptr1->data;
        ptr1->data=ptr2->data;
        ptr2->data=temp;
        ptr1=ptr2->next;
        ptr2=ptr1->next;
    }
    return head;
}
node* newnode(int data){
    node* temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}
node* push(node* head,int data){
    if(head==NULL){
        head=newnode(data);
    }
    else{
        node* ptr= head;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode(data);
    }
    return head;
}
void print(node* head){
    node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data;
        ptr=ptr->next;
    }
}
int main(){
    node* head=NULL;
    // int data;
    // while (1)
    // {
    //     cout<<"pls enter the data\n";
    //     cin>>data;
    //     if(data>0){
    //     head=push(head,data);
    //     }
    //     else{
    //         break;
    //     }
    // }
    head=push(head,1);
    head=push(head,2);
    head=push(head,3);
    head=push(head,4);
    head=push(head,5);
    head=push(head,6);
    print(head);
    // node* head=(node*)malloc(sizeof(node));
    // head->data=0;
    // head->next=(node*)malloc(sizeof(node));
    // head->next->data=1;
    // head->next->next=(node*)malloc(sizeof(node));
    // head->next->next->data=2;
    // head->next->next->next=(node*)malloc(sizeof(node));
    // head->next->next->next->data=3;
    // head->next->next->next->next=NULL;
    cout<<"\nthis is after adj_roto function\n";
    head=adj_roto(head);
     print(head);
    return 0;
}