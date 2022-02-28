#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::string;
int main(){
    string text;
    string key;
    string res="";
    cout<<"pls enter the string to encrypt\n";
    cin>>text;
    cout<<"pls enter the key\n";
    cin>>key;
    int j=0;
    // cout<<key.length()<<"\n";
    // cout<<text.length();
    for(int i=0;i<text.length();i++){
        if(j==key.length()-1){
            j=0;
        }
        //cout<<(char)(((text[i]+key[j])%26)+'a')<<"\n";
        //cout<<"this is key text\n"<<key[j];
        res+=(char)(((text[i]+key[j])%26)+'a');
        j++;
    }
    cout<<"this is the encrypted message\n"<<res;
    return 0;
}