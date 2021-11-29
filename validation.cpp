#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::string;
int main(){
    string s,a,m="sai yugandhar",n="insun@1234";
    cout<<"pls enter the user name\n";
    getline(cin,s);
    cout<<"pls enter the password\n";
    cin>>a;
    if(s==m && a==n){
        cout<<"it is right";
    }
    else{
        cout<<"it is wrong";
    }

}