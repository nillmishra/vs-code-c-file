#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, remain,i, rev =0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    i=n;
    while (i>0)
    {
        remain = i%10;
        rev = rev *10 + remain;
        i = i/10;

    }
    printf("%d \n", rev);
    if (rev == n )
    printf("is plaindrome");
    else
    printf("not plaindrome");
    
    return 0;
}
