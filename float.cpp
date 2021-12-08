#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x;
    float y;
    cin>>x;
    cin>>y;
    if(y<x || x%5!=0){
        //cout<<setprecision(2)<<y;
        printf("%.2f",y);
    }
    else{
        //cout<<setprecision(2)<<(y-0.50)-x;
        printf("%.2f",(y-0.50)-x);
    }
	return 0;
}
