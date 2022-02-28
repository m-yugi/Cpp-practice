#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
int main(){
    char a;
    int key;
    string s,res="";
    cout<<"pls press y to encrypt and n to decrypt\n";
    cin>>a;
    if(a=='y'){
        cout<<"pls enter the text to you want to enctypt\n";
        cin>>s;
        cout<<"pls enter the key to encrypt\n";
        cin>>key;
    }
    else{
        cout<<"pls enter the text to decrypt\n";
        cin>>s;
        cout<<"pls enter the key to decrypt\n";
        cin>>key;
        key=key%26;
        key=26-key;
    }
    int arr[26]={ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    for(int i=0;s[i]!=0;i++){
        res+=arr[((s[i]-'a')+key)%26];
    }
    cout<<res;
}