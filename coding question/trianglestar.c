#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n-i; k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i ; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
    return 0;
}
