#include <stdio.h>
#include <stdlib.h>

int find_N(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    find_N(n);
    return 0;
}

int find_N(int n){
if(n%2==0){
    printf("even");
}
else{
    printf("odd");
}

}