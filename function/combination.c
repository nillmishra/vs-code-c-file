#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int r;
    printf("Enter the value of r: ");
    scanf("%d", &r);
    int nfact= 1, rfact =1, nrfact=1;
    for (int i = 2; i <=n; i++)
    {
        nfact=nfact*i;
    }
    for (int i = 2; i <=r; i++)
    {
        rfact=rfact*i;
    }
        for (int i = 2; i <=n-r; i++)
    {
        nrfact=nrfact*i;
    }
    int ncr = nfact/(rfact*nrfact);
    printf("%d", ncr);
    return 0;
}   
