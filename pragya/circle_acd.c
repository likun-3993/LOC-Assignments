#include<stdio.h>
int main(){
	int r;
	printf("enter the radius of circle\n ");
	scanf("%d",&r);
	printf("diameter of the circle is %d\n",r*2);
	printf("circumference of the circle is %f\n",2*3.14*r);
	printf("area of the circle is %f\n",3.14*r*r);
	return 0;
}
