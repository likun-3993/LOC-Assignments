#include <stdio.h>
void swap(a,b)
{	
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("AFTER SWAPING:\n");
	printf("a=%d\n",a);
	printf("b=%d",b);	
}
int main()
{
	int a,b;
	printf("enter two numbers a and b-->");
	scanf("%d %d",&a,&b);
	printf("BEFORE SWAPPING:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	swap(a,b);
}
