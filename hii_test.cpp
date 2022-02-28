#include <iostream>
#include<vector>
#include<string>
using std::vector;
using std::string;
using std::cin;
using std::cout;
int main(){
    vector<vector<int>> v(3,vector<int>(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            v[i][j]=i+j;
            cout<<v[i][j];
        }
    }
    for(int l=0;l<3;l++){
        for(int m=0;m<3;m++){
            cout<<v[l][m];
        }
    }
}