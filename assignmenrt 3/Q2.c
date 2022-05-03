#include <stdio.h>
int prime(a,i)
{
	int count;
	if (a%i==0)
	{
		count=1;
	}
	i--;
	if (i>1)
	{
		prime(a,i);
	
	}
	else if (a==2 || a==-2)
	{
		printf("PRIME");	
	}
	else if (count==1)
	{
		printf("not PRIME");
	}
	else
	{
		printf("PRIME");
	}
}
int main()
{
	int num;
	printf("enter a number(>1) to check-->");
	scanf("%d",&num);
	prime(num,num-1);
	return 0;
}
