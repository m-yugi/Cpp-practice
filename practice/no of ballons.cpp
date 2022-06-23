#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int count=0;
int s;
int i,j,k,m;
int count1=0,count2=0;
cin>>s;
for(i=1;i<=s;i++)
{
    int g,p;
    cin>>g>>p;
    int min1=std::min(g,p);
    int max1=std::max(g,p);
    int n;
    cin>>n;
    int t1[n],t2[n];
    for(j=0;j<n;j++)
    {
        cin>>t1[i]>>t2[i];
    }
    for(k=0;k<n;k++)
    {
        if(t1[i]==1)
        {
            count1++;
        }
        if(t2[i]==1)
        {
            count2++;
        }

    }
    if(count1>count2)
    {
        count=count1*min1+count2*max1;
        cout<<count1<<endl;
    }
    else
    {
        count=count1*max1+count2*min1;
        cout<<count2<<endl;
    }
    cout<<count<<endl;
}
}
