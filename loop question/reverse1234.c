#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n ,t, sum;
    
    printf("Enter the value: ");
    scanf("%d", &n);
    t=n;
    int ld = 0;
    int r =0;
    while (n!= 0)
    {

        ld = n % 10;
        r = r*10+ld;
        n = n / 10;
    }
    printf("the reverse of the digit: %d ", r);
    sum = t + r;
    printf("the sum of the digit: %d ", sum);

    return 0;
}
