#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int first =1;
        printf("%d", first);
    
        for (int j = 0; j <= i; j++)
        {
            int icj1 = first * (i-j)/(j+1);
            printf("%d ", first);
        }
        printf("\n");
    }
    return 0;
}
