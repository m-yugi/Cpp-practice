#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::string;
int main(){
    string a="11";
    string b="1";
    string res;
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        while(i >= 0 || j >= 0){
            int sum = carry;
            if(i >= 0) sum += a[i--] - '0';
            if(j >= 0) sum += b[j--] - '0';
            carry = sum > 1 ? 1 : 0;
            res += std::to_string(sum % 2);
        }
        if(carry) res += std::to_string(carry);
        cout<<res;
}