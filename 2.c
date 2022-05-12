#include <stdio.h>

int check(int num, int i)
{
    if (i != 1) {
        if (num % i != 0) {
            return check(num, i - 1);
        }
        else {
            return 0;
        }
    }
    else {
        return 1;
    }
}

int main()
{
    int n= 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (check(n, n / 2) == 1)
        printf("prime");
    else
        printf("not prime");

    return 0;
}
