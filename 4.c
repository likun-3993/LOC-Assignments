#include<stdio.h>

void swap(int, int);

int main()
{
    int x, y;

    printf("Enter two numbers\n");
    scanf("%d%d", &x, &y);

    swap(x, y);

    return 0;
}

void swap(int m, int n)
{
    int temp;

    temp = m;
    m    = n;
    n    = temp;

    printf("Swapped numbers: x = %d and y = %d\n", m, n);
}