#include<stdio.h>

int main()
{
int a,b,n;
    printf("enter your choice");
    scanf("%d",&n);
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    switch(n)
    {
    case 1: printf("Sum = %d", a+b);
    break;
    case 2: printf("difference = %d", a-b);
    break;
    case 3: printf("multiplication = %d", a*b);
    break;
    case 4: printf("division = %d" , a/b);
    break;
    case 5: printf("mod = %d" , a%b);
    break;
    default: printf("go to different code");
    break;
    }
   
}