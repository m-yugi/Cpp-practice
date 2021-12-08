#include<iostream>
using std::cout;
int main()
{
    int arr[5]={0};
    for(int i=0;i<5;i++){
        cout<<*(arr+i);
    }
    int a;
    int* p;
    a=10;
    p=&a;
    cout<<p;
}