#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(1);
    int n=arr.size();
    int a=*max_element(arr.begin(),arr.end());
    int arr1[a]={0};
    for(int i=0;i<a;i++){
    	arr1[arr[i]]++;
	}
	for(int i=0;i<a;i++){
		while(arr1[i]!=0){
			arr.pop_back();
			arr.push_back(i);
			arr1[i]--;
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
