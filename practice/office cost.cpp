#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;
int main()
{
    long long int d;
    cin>>d;
    long long int oc,of,od;
    cin>>oc>>of>>od;
    int cs,cb,cm,cd;
    cin>>cs>>cb>>cm>>cd;
    long long int online=oc+(abs((d-of))*od);
    long long int classic=cb+(floor(d/cs)*cm)+(d*cd);
    if(online>classic)
    {
        cout<<"Classic Taxi";
    }
    else
    {
        cout<<"Online Taxi";
    }
}
