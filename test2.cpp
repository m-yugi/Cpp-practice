#include <iostream>
using namespace std;

int main() {
    int t,count=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,temp;
        cin>>n;
        temp=n;
        if(n==1){
            cout<<1<<endl;
        }
        else if(n==2){
            cout<<2<<endl;
        }
        for(int i=1;i<=n/2;i++){
            while(temp>1){
                temp=temp-i;
            }
            if(temp==1){
                count+=1;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
