#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::string;
int main(){
    string text;
    string key;
    string res="";
    cout<<"enter the text to dectypt\n";
    cin>>text;
    cout<<"pls enter the key\n";
    cin>>key;
    int j=0;
    for(int i=0;i<text.length();i++){
        if(j==key.length()-1){
            j=0;
        }
        res+=(char)(((text[i]-key[j]+26)%26)+'a');
    }
    cout<<"this is the decrypted cipher\n"<<res;
}