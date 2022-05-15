#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::vector;
int pos(vector<int> &v,int target){
    int len=v.size();
    int start=0,end=len-1;
    while (start<=end)
    {
        int mid=start+((end-start)/2);
        if(v[mid]==target) return mid;
        else if(v[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return start;   
}
int main(){
    vector<int> v={1,3,5,6};
    cout<<pos(v,7);
}