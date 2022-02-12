#include<stdio.h>
int main(){
	float a,b;
	int x;
	printf("enter the value of two numbers\n");
	scanf("%f %f",&a,&b);
	printf("Choose operation to perform:\n");
	printf("1.Addition(+)\n");
	printf("2.Subtraction(-)\n");
	printf("3.Multiplication(x)\n");
	printf("4.Division(/)\n");
	scanf("%d",&x);
	switch(x){
		case 1: printf("sum of the no.s is %f",a+b);
		        break;
		case 2:printf("difference of the no.s gives %f\n",a-b);
				break;
		case 3:	printf("product of the no.s is %f",a*b);
				break;
		case 4:	printf("division of the no.s give %f\n",a/b);
				break;
		default:("invalid choice\n");
				break;
	}
	return 0;
}
