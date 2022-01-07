#include<iostream>
#include<vector>
#include<algorithm>
using std::find_if;
using std::vector;
using std::cout;
int main(){
    vector<char> v={'a','b','c','a','b','c','b','b'};
    if(find(v.begin(),v.end(),'h')!=v.end()){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}