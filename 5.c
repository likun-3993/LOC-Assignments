#include<stdio.h>
#define M 100

int E(int []);
int n;

int main()
{
    int a[M] , m , i ;
    printf(" enter the number of elements to be stored in the array :");
    scanf("%d",&n);
   
    printf(" enter %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
	      printf(" element - %d : ",i);
	      scanf("%d",&a[i]);
	    }
    m=E(a);

    printf(" largest : %d\n\n",m);
    return 0;
}
int E(int a[])
  {
    int i=1,m;
    m=a[0];
    while(i < n)
	   {
      if(m<a[i])
           m=a[i];
      i++;
    }
    return m;
}
