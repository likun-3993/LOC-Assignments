#include <stdio.h>
int main()
{
    char ch;
    int num1, num2, result;
    
    printf("Enter an Operator (+, *, *, /): ");
    scanf("%c", &ch);
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);
    
    switch(ch){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
    }
    printf("Result = %d", result);
    return 0;
}

