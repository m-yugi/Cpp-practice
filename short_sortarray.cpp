#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::vector;
int main(){
    vector<int> v{1,2,3,10,4,2,3,5};
    int max=v[0],size=v.size(),start=0,end=0;
    if(size==1){
        cout<<0;
    }
    else{
        for(int i=1;i<size;i++){
            if(max<=v[i]){
                max=v[i];
                if((i-1)>end){
                    end=(i-1);
                }
            }
            else{
                if((i-1)<start){
                    start=(i-1);
                }
                max=v[i];
            }
        }
    }
    cout<<start<<" "<<end;
}
