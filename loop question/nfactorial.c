#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product = product * i;
        printf("\nthe factorial of %d is %d", i, product);
    }
    
    return 0;
}