#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The value of a: %d\n", a);
    printf("The value of a: %d", b);
    return 0;
}
