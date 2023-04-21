#include <stdio.h>
int main(int argc, char const *argv[])
{
    float n,b;
    printf("enter your distance : ");
    scanf("%f", &n);

    if (n <= 100)
    {
        b = n * (12.75);
    }
    else if (100 < n && n<= 250)
    {
        b = n * (14.19);
    }
    else if (250 < n && n <= 300)
    {
        b = n * (15.79);
    }
    else if (n>300)
    {
        b = n * (16);
    }
    printf("so your total fare is %f", b);

    return 0;
}
