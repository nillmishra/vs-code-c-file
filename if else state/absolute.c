#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf ("Enter the number : ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("The absolute value is n is %d", n);
    }
    if (n <= 0)
    {
        printf("The absolute value is n is %d", -1 * n);
    }
    return 0;
}
