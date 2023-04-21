#include<stdio.h>
int main(int argc, char const *argv[])
{
    int p,q;
    printf("enter the value of p & q :\n");
    scanf("%d %d", &p, &q);
    printf("p = %d  q = %d",p , q);
    printf("\nthe reminder of p divided q is: %d", p%q);
    return 0;
}
