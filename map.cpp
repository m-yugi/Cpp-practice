#include<iostream>
#include<map>
using std::map;
using std::cin;
using std::cout;
using std::endl;
int check(int n,map<int,int> &mapi){
    if(mapi[n]){
        return mapi[n];
    }
    else{
        return 0;
    }
}
void print(map<int,int> &mapi){
    cout<<mapi[1]<<endl;
    cout<<mapi[2]<<endl;
    cout<<mapi[3]<<endl;
    mapi[4]=4;
    cout<<mapi[4]<<endl;
}
int main(){
    map<int,int> m;
    m[1]=1;
    m[2]=2;
    m[3]=3;
    print(m);
    cout<<check(5,m);
}