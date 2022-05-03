#include <stdio.h>
void chk(a)
{
	if (a%2==0)
	{
		printf("EVEN");
	}
	else
	{
		printf("ODD");
	}
}
int main()
{
	int num;
	printf("Enter a number-->");
	scanf("%d",&num);
	chk(num);
	return 0;
}
