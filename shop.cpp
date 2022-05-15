#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::vector;
int main(){
    int size,min=INT16_MAX,proof=0;
    cin>>size;
    vector<int> price(size,0);
    vector<int> profit(size,0);
    for(int i=0;i<size;i++){
        cin>>price[i];
    }
    for(int i:price){
        if(min>i){
            min=i;
        }
        if(proof<abs(min-i)){
            proof=abs(min-i);
            }
    }
    cout<<proof;
}