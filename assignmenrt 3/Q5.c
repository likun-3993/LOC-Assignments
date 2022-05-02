#include <stdio.h>
void large(int *lst,int ln)
{
	int lrg,i;
   	lrg=*lst;
	for (i=1;i<=ln;i++)
	{lst++;
	if (lrg<=*lst)
		{
			lrg=lst[i];
		}
	}
	printf("Largest number in your array=%d",lrg);
}
int main()
{
	int l,elm,i;
	printf("Enter your size of array:");
	scanf("%d",&l);
	int n[l];
	for (i=0;i<l;i++)
	{
		printf("enter the no.-->");
		scanf("%d",&elm);
		n[i]=elm;
	}
	printf("your array\n");
	printf("[");
	for (i=0;i<l;i++)
	{
		printf(" %d",n[i]);
	}
	printf("]\n");
    large(n,l);
    return 0;
}
