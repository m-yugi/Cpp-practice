#include<iostream>
using namespace std;
int main ()
{
	int count=0,i;
	for( i=1;i<=10000;i++)
	{
		int sum=0;
		int temp=i;
		while(temp!=0)
		{
			sum+=temp%10;
			temp=temp/10;
		}
		if(sum==1)
		{
			count++;
		}
	}
	cout<<count;
}

