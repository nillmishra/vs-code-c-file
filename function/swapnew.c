#include <stdio.h>
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    return;
}
int main(int argc, char const *argv[])
{
    int x, y;
    printf("enter the value of a: ");
    scanf("%d",&x);
    printf("enter the value of b: ");
    scanf("%d",&y);
    swap(x, y);
    printf("The value of a: %d\n", x);
    printf("The value of y: %d", y);
    return 0;
}
