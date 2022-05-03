#include<stdio.h>
void check(int x)
{
    if (x % 2 == 0)
    {
        printf("The given no %d is even",x);
    }
    else
    printf("The given no %d is odd");
}

int main()
{
    int a;
    printf("Enter the number to be checked");
    scanf("%d",&a);
    check(a);
    return 0;
}