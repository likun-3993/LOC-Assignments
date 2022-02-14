#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number to check even or odd ");
    scanf("%d", &n);
    
    switch(n % 2)
    {
        case 0:
            printf("even");
            break;
        case 1:
            printf("odd");
            break;
    }
    return 0;
}

