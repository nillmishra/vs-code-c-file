//1st function calling
#include <stdio.h>
int factorial(int x){
    int fact=1;
    for (int i = 2; i <=x; i++)
    {
        fact=fact*i;
    }
    return fact;
}
//2nd function k andar 1st ka calling hai
int combination(int n, int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int r;
    printf("Enter the value of r: ");
    scanf("%d", &r);
    // int nfact = factorial(n);
    // int rfact = factorial(r); 
    // int nrfact = factorial(n-r);

    int ncr = combination(n,r);
    printf("%d", ncr);
    return 0;
}
