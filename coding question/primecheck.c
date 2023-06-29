#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, r=0,i;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (int i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
        r=1;
        break;
        }
    }
    if (r==0)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
    return 0;
}
