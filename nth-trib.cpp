#include<iostream>
#include<map>
using std::map;
using std::cout;
class Solution {
public:
    int fibs(int n,map<int,int> &m){
        if(m[n]){
            return m[n];
        }
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        return m[n]=fibs(n-1,m)+fibs(n-2,m)+fibs(n-3,m);
    }
public:
    int fib(int n) {
        map<int,int> m;
        return fibs(n,m);
    }
};
int main(){
    Solution s;
    cout<<s.fib(6);

}