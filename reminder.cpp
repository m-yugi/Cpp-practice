#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,r=0;
        cin>>n;
        int sum=0;
        sum+=n%10;
        n=n/10;
        while(n>0){
            r=n%10;
            n=n/10;
        }
        cout<<(sum+r)<<endl;
    }
	return 0;
}