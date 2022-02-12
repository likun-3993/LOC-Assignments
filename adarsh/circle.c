#include<stdio.h>
int main()
{
	float r,d,cir,area;
	printf("Enter the radius of the circle");
	scanf("%f",&r);
	d=2*r;
	cir=3.14*d;
	area=3.14*r*r;
	printf("The diameter of the circle is %f\n",d);
	printf("The circumference of the circle is %f\n",cir);
	printf("The area of the circle is %f\n",area);
	return 0;
}
