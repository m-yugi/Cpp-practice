#include <bits/stdc++.h>
using namespace std;
void printPattern(int& n,int s)
{
	cout<<"Case #"<<s<<":"<<"\n";
	int i,j,mid;
	if(n%2==1)
	n++;
	mid = n/2;
	for(i = 1; i<= mid; i++) {
	for(j = 1; j<=mid-i; j++)
		cout<<" ";
		
	if(i == 1) {
		cout << "*";
	}else{
		cout << "*";
		for(j = 1; j<=2*i-3; j++) {
			cout << " ";
		}
		cout << "*";
	}
	for(j = 1; j<=mid-i; j++)
		cout<<" ";
		
	cout << endl;
}
for(i = mid+1; i<n; i++) {
		
	for(j = 1; j<=i-mid; j++)
		cout<<" ";
		
	if(i == n-1) {
		cout << "*";
	}else{
		cout << "*";
		for(j = 1; j<=2*(n - i)-3; j++) {
			cout << " ";
		}
		cout << "*";
	}
	for(j = 1; j<=i-mid; j++)
		cout<<" ";
	cout << endl;
}
}
int main() {
int n,m;
cin>>n;
for(int i=0;i<n;i++){
    cin>>m;
printPattern(m,i+1);
}
}