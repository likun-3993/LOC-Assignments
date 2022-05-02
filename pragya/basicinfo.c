#include<stdio.h>
int main(){
	char name[30],hobby[50],br[20];
	int regd;
	printf("Write your Name:\n");
	scanf("%s",&name);
	printf("Regd.no:\n");
	scanf("%d",&regd);
	printf("Branch:\n");
	scanf("%s",&br);
	printf("Your hobbies:\n");
	scanf("%s",&hobby);
	printf("Your details are:\n");
	
	printf("Name:%s\n",name);
	printf("Regd.no:%d\n",regd);
	printf("Branch:%s\n",br);
	printf("Hobbies:%s\n",hobby);
	return 0;
}
