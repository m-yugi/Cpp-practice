#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int MAXSIZE=10;
int stack[10];
int top=-1;

int push(int n)
{
	if(top<MAXSIZE-1)
	{
		top=top+1;
		stack[top]=n;
	}
	else
	{
		printf("stack is full\n");
	}
}
int print()
{
	while(top!=-1)
	{
		printf("%d",stack[top]);
		top=top-1;
	}
}
int main()
{
	int n;
	while(1)
	{
		printf("enter the value of n \n");
		scanf("%d",&n);
		if(n>0)
		{
			push(n);
		}
		else
		{
			break;
		}
	}
	print();
}
