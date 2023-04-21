#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value :");
    scanf("%d",  &n);
    if (99 < n < 1000 || 99 < n && n < 1000)
    {
        printf(" valid no\n");
        printf("your three digit input is %d", n);
    }
    else
    {
        printf(" invalid no\n");
        printf("your input is %d", n);
    }
    return 0;
}
