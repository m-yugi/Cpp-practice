#include<iostream>
using namespace std;
int main(){
    int n,j=0;
    cin>>n;
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        arr[i]=m;
        arr2[i]=0;
    }
    for(int i=0;i<n;i++){
        arr2[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        while(arr2[i]!=0){
            arr[j]=i;
            j++;
            arr2[i]--;
        }
    }
    for(int i=0;i<n;i++){
    	cout<<arr[i];
	}
}
