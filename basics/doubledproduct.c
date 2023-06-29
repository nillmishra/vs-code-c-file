#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("enter the value of n :");
    scanf("%d", &n);

    int a = 1;
    for (int i = 1; i <= n; i++)
    { 

        printf("%d ", a);
        a = 2 * a;
    }
    return 0;
}
