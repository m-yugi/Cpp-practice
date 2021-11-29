#include<iostream>
#include<vector>
#include<string.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
int main(){
    int count=0;
    string  s="bad";
    vector<int> v{10,20,30};
        long shift=0;
        for(int i=s.size()-1;i>=0;i--){
            s[i]=((s[i]-'a')+(shift+v[i]) % 26) % 26 +'a';
            shift+=v[i];
    }
    cout<<s;
}
