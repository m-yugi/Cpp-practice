#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
char stack[20];
int top=-1;
int MAXSIZE=20;
int push(char n)
{
	if(top>=MAXSIZE-1)
	{
		printf("stack is full ");
	}
	else
	{
		stack[++top]=n;
	}

}
char pop()
{
	if(top== -1)
	{
		//printf("stack is empty");
		return -1;
	}
	else
	{
		return stack[top--];
	}
}
int priority(char x)
{
	
	if(x== '(')
	{
		return 0;
	}
	if(x== '+'||x== '-')
	{
		return 1;
	}
	if(x== '*'||x== '/')
	{
		return 2;
	}	
}

int main()
{
 char expr[20];
 char x,*e;
 printf("enter the expression : ");
 scanf("%s",expr);
 e=expr;
 while(*e !='\0')
 {
 	if(isalnum(*e))
 	{
 		printf("%c",*e);
	}
	 else
	 {
	      while(priority(*e)<priority(stack[top]))
	      {
	      	x=pop();
	      	printf("%c",x);
		  }
		  push(*e);
	 }
	 e++;
 }
 while(top!=-1)
 {
 	x=pop();
 	printf("%c",x);
 }
}
