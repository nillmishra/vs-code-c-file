#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("the sum is %d", sum);
    return 0;
}
