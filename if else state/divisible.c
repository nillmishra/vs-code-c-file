#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value :");
    scanf("%d",  &n);
    if (n%5==0 || n%3==0)
    {
        printf("your no is divisible");
    }
    else{
        printf ("no divisible");
    }

    return 0;
}