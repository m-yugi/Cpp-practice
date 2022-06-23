#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int removeDuplicates(int arr[], int arrsize)
{
    int i,x,key,j;
    int count;
    for(i=0;i<arrsize;i++)
    {
        key=arr[i];
        x=i+1;
        count=0;
        while(arr[x]==key)
        {
            count++;
            x++;
        }
        arrsize=arrsize-count;
        
        for(j=i+1;j<arrsize;j++)
        {   
                arr[j]=arr[j+count];    
        }
    }
    for(i=0;i<arrsize;i++)
    {
    	printf("%d\n",arr[i]);
	}
    return arrsize;
}
int main()
{
	int i,x;
    int arr[20];
	int arrsize=10;
	for(i=0;i<arrsize;i++)
	{
	printf("enter the array");
	scanf("%d",&arr[20]);
x=removeDuplicates(arr,arrsize);
	}
	printf("%d",x);
}
