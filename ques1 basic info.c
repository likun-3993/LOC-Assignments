#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[20],branch[20],hobbies[50];
    int reg;
    printf("enter basic information \n");
    printf("Enter your name ");
    gets(name);
    printf("Enter your branch ");
    gets(branch);
    printf("Enter your hobbies ");
    gets(hobbies);
    printf("Enter your registration number(last 3 digits)");
    scanf("%0.3d",&reg);
    return 0;
}