#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a = 4;
    for (int i = 1; i <= n;i = i+1)
    {
        a=a+3;
        printf("%d ", a);
    }
    

    return 0;
}

