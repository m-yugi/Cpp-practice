#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string>
using std::cin;
using std::cout;
using std::string;
int arr[26]={ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
char chargen(int num){
    return arr[num%26];
}
int main(){
    string text;
    string key="";
    string res="";
    cout<<"pls enter the text to encode\n";
    cin>>text;
    srand(time(0));
    for(int i:text){
        char c=chargen(rand());
        key+=c;
        //cout<<(c+i)%26<<"this is (c+i)%26\n";
        //cout<<c<<"\nthis is the char returned by the chargen\n";
        res+=arr[((c+i)%26)];
    }
    cout<<"this is encoded message\n"<<res;
    cout<<"\nthis is the key\n"<<key;
    return 0;
}