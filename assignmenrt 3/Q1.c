#include <stdio.h>
int gcd(a,b)
{  	int rem;
	rem=b%a;
//	printf("rem %d\n",rem);
	if (rem!=0)
	{
		b=a;
		//printf("b %d\n",b);
		a=rem;
		//printf("a %d\n",a);
		gcd(a,b);	
	}
	else 
	{
		return a;
	}
}
int main()
{
	int a,b,val;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	val=gcd(a,b);
	printf("GCD=%d",val);
	return 0;
}
