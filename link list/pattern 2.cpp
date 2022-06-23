#include<stdio.h>
int main()
{
	int x,y,i,j,k=1;
	printf("enter the value of x,y \n");
	scanf("%d,%d",&x,&y);
	int n=x*y;
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=y;j++)
		{
			if(j<=i)
			{
				printf("%d",k++);
				printf(" ");
			}
			else
			{
				printf("%d",n--);
				printf(" ");
			}
		}
		printf("\n");
	}
return 0;
}
