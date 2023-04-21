#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("enter the value : ");
    scanf("%d", &n);
    int a =0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a =1;
            break;
        }
    }
    if(a==0)
    {
        printf("the given no is prime\n");
    }
    else
    {
        printf("the given no is composite\n");

    }
    

return 0;
}
