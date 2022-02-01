#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(10,1);
    for(int i :v){
        cout<<i;
    }  
}