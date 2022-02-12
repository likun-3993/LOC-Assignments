#include<stdio.h>

int main()
{
float radius, diameter, circumference, area;
/*
 * Input radius of circle
 */
printf("Enter radius of circle:");
scanf("%f",&radius);
/*
 *Calculate diameter,circumference & area
 */
diameter = 2*radius;
circumference=2*3.14*radius;
area=3.14*(radius*radius);
/*
 *Print all results
 */


    printf("Diameter of the circle = %.1f units\n", diameter);
    printf("Circumference of the circle = %.2f units\n", circumference);
    printf("Area of the circle = %.1fsq. units\n",area);
    
 }