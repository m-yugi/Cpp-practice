#include<bits/stdc++.h>
using namespace std;
 
class GFG{
     
public:
int fib(int n)
{
    int f[n + 2];
    int i;
    f[0] = 0;
    f[1] = 1;
 
    for(i = 2; i <= n; i++)
    {
       f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
    }
};
int main ()
{
    GFG g;
    int n;
    cout<<"enter the values of n \n";
    cin>>n;
    cout << g.fib(n);
    return 0;
}
