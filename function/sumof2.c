#include <stdio.h>
int add(int a, int b){
    return a+b; //return type
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
// pass by value use hua hai
// dono dabbe ka a,b alag alag hai