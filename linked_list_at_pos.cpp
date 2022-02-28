#include<iostream>
using std::cin;
using std::cout;
struct node{
  int data;
  node* next;
};
node* push(node* head,int data){
    cout<<"i came here\n";
  node* temp= (node*)malloc(sizeof(node));
  temp->data=data;
  temp->next=NULL;
    node* ptr=head;
  if(head==NULL){
      head=temp;
  }
  else{
      while(ptr->next!=NULL){
          ptr->next=temp;
      }
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
node* insert_at_pos(node* head,int pos,int data){
    node* temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    node* ptr=head;
    while(pos--){
        ptr=ptr->next;
    }
    node* help=ptr->next;
    ptr->next=temp;
    temp->next=help;
    return head;
}
int main(){
    node* head=NULL;
    cout<<"pls enter the data\n";
    int data;
    cin>>data;
    cout<<data;
    while(data>0){
        int num;
        cin>>num;
        head=push(head,num);
        print(head);
    }
    cout<<"this is the data before the insertion\n";
    print(head);
    cout<<"Enter the postion and value to be inserted\n";
    int pos,value;
    cin>>pos>>value;
    head=insert_at_pos(head,pos,value);
    cout<<"this is after insertion";
  return 0;
}