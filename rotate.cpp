#include<iostream>
using namespace std;
int reverse(int arr[],int start,int end){
	if(end-start<=0){
		return 0;
	}
	else{
		for(int i=start;i<end;i++){
			int temp=arr[i];
			arr[i]=arr[end];
			arr[end]=temp;
			end--;
		}
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++){
		int j;
		cin>>j;
		arr[i]=j;
	}
	reverse(arr,0,m);
	reverse(arr,m,n-1);
	reverse(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
