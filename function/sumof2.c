#include <stdio.h>
int add(int a, int b){
    return a+b;
}
int main(int argc, char const *argv[])
{
    int a;
    printf("Ener the number: ");
    scanf("%d", &a);
    int b;
    printf("Enter the nunmber: ");
    scanf("%d", &b);
    int sum = add(a,b);
    printf("%d", sum);
    return 0;
}
