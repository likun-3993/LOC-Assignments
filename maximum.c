#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers ");
    scanf("%d%d",&num1,&num2);
    
    if(num1>num2)
    {
        printf("%d is maximum",num1);
    }
    else if (num1==num2)
    {
        printf("both are equal");
    }
    else
    {
        printf("%d is maximum",num2);
    }
    return 0;
}

    