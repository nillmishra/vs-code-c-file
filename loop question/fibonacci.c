#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);
    int a= 1;
    int b=1;
    int sum = 0;
    for (int i = 1; i <= n-2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("\nthe fibbonaci is %d is %d",i, sum);
    }
    
    return 0;
}
