#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf ("Enter the year : ");
    scanf("%d", &n);
    if (n%4==0)
    {
        printf("%d is leap year", n);
    }
    else
    {
        printf(" %d is not a leap year", n);
    }
    return 0;
}

