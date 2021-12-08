#include<iostream>
using std::cin;
using std::cout;
using std::endl;
struct node{
    int data;
    node* next;
};
node* create(int data)
{
    node *temp =new node();
    temp->data=data;
    temp->next=NULL;
    return temp;
}
node* swap(node* first,node* second){
    first->next=second->next;
    second->next=first;
    return second;
}
node* swapPairs(node* head){
    if(head==NULL){
        return head;
    }
    node* first=head;
    node* second=first->next;
    node* newhead=second;
    node* dummy=NULL;
    while(first && second){
        node* temp=swap(first,second);
        if(dummy) dummy->next=temp;
        dummy=temp->next;
        first=dummy->next;
        if(first) second=first->next;
    }
    return newhead;
}
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}
int main()
{
    node* head=NULL;
    node* first=create(1);
    node* second=create(2);
    node* third=create(3);
    node* four=create(4);
    node* five=create(5);
    head=first;
    first->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    five->next=NULL;
    print(head);
    swapPairs(head);
    print(head);
}