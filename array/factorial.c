#include <stdio.h>
int factorial(int n)
{
    printf("factoraial have been called for %d", n);
    if(n==0)
    return(1);
    return(n*factorial(n-1));
}
int main()
{
    int x, n;
    printf("Enter the number to find factorial: ");
    scanf("%d", &n);
    x = factorial(n);
    printf("Factorial of %d is %d\n", n,x);
    return 0;
}
