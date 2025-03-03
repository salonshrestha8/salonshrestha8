#include<stdio.h>
int fib(int num)
{
	if(num==0)
	{
		return 0;
		
	}
	else if(num==1)
	{
		return 1;
	}
	else
	{
		return fib(num-1)+ fib(num-2);
	}
}
int main()
{
	int n=0, i=0;
	printf("\nEnter how many fibonacci series you want to calculate:");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("\n%d", fib(i));
		
	}
	return 0;
}
