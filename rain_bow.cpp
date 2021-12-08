#include<iostream>
using std::cin;
using std::cout;
bool pall(int arr[],int size){
    int head=0,end=size-1;
    while(head!=end){
        if(arr[head]!=arr[end]){
            return false;
        }
    }
    return true;
}
int main(){
int t,j;
cin>>t;
for(int i=0;i<t;i++){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>j;
        arr[i]=j;
    }
    if(pall(arr,size)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
}