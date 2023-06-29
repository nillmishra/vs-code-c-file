#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("enter the value of n :");
    scanf("%d", &n);

    int a = 3;
    for (int i = 1; i <= n; i = i + 1)
    {
        a = 4 * a;
    printf("%d ", a);
    }

    return 0;
}
