#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i%2!=0)sum =-n/2 +n;
        if (i%2==0)sum =-n/2;   
    }
    printf("the sum is %d", sum);
    return 0;
}