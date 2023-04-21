#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);

    int a = 100;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a - 50;
        if (a == -456)
        {
            break;
        }
        
    }

    return 0;
}
