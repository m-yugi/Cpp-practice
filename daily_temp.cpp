#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,count=1;
	cin>>n;
	vector<int> arr;
	//vector<int> ars;
	int ars[n]={0};
	for(int i=0;i<n;i++){
		int j;
		cin>>j;
		arr.push_back(j);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]>arr[i]){
				ars[i]=j-i;
				break;
			}
	}
	for(int i=0;i<n;i++){
		cout<<ars[i];
	}
}
}
