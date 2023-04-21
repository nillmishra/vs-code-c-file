#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);
    int count=0;
    while(n!= 0)
    {
        n= n/10;
        count++;

    }
    printf("The dgit is : %d", count);

    return 0;
}
