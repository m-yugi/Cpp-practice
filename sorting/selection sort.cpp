#include <stdio.h>
#include<conio.h>

int main()
{
    int i,j,n,a[20],temp=0,min;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    { 
           min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
               min=j;
            }
        }
         temp=a[i];
                a[i]=a[min];
                a[min]=temp;
    }
    printf("array after sorted is :");
for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
