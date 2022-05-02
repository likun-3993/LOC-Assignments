#include<stdio.h>
#include<math.h>
#define pi 3.1415

int main ()
{
    float r,D,C,A;
    printf("enter the value of radius ");
    scanf("%f",&r);
    D=2*r;
    C=2*pi*r;
    A=pi*r*r;
    printf("the diameter of the circle is %f \nThe circumference of the circle %f \nThe area of the circle is %f",D,C,A);
    return 0;
}