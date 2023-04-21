#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the digit : ");
    scanf("%d", &n);
    int ld =0;
    int sum = 0;
    while (n!=0)
    {
        ld =n%10;
        sum = sum +ld;
        n=n/10;
    }
    printf("the sum of all digits are: %d ", sum);
    return 0;
}
