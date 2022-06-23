#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
     int i,j,n;
    scanf("%d",&n);
   int arr[n],sum=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(j=n;j>=1;j--)
   {
       printf("%d",arr[j]);
   }
}
