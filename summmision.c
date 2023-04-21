#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c, sum;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("enter the value of b:");
    scanf("%d", &b);
    printf("enter the value of c:");
    scanf("%d", &c);
    sum = a + b + c;
    printf("the sum of A + B + C = %d", sum);
    return 0;
}
