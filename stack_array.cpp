#include<iostream>
using std:: cin;
using std::cout;
int size;
int top=-1;
int arr[100];
void push(int n){
    if(top>=size){
        cout<<"\nstack is full\n";
    }
    else{
        arr[++top]=n;
    }
}
int main(){
    cout<<"Pls enter the size of the array\n";
    cin>>size;
    if(size<=0){
        cout<<"stack is empty\n";
    }
    else{
    for(int i=0;i<100;i++){
            int temp;
            cin>>temp;
            push(temp);
        }
    }
    for(int i=size-1;i>=0;i--){
        cout<<arr[i];
    }
}