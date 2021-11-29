#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,k,max=0,count=0;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int j;
		cin>>j;
		v.push_back(j);
	}
	cin>>k;
	sort(v.begin(),v.end());
	cout<<v[n-k];
}
