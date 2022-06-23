#include <stdio.h>
#include<conio.h>

int main()
{
    int i,j,n,a[20],temp=0;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]> a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("array after sorted is :");
for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
