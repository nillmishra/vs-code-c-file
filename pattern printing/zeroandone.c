#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, n;
    printf("Enter the number of line: ");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++) 
    {
        for (int  j = 1; j <=i; j++)
        {
        printf("%d ", a%2!=0);
        a = a+1;
        }
        printf("\n");
    }
    return 0;
}