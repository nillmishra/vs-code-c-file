#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the value:");
    scanf("%d", &a);
    if (a%2==0)
    {
        printf ("the value is even");
    }
    if (a%2!=0)
    {
        printf ("the value is odd");
    }
    
    return 0;
}
