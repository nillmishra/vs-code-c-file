#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 100;
    for (int i = 1; i <= 34 ; i=i+1)
    {
        printf("%d ", a);
        a = a -3;
    }
    return 0;
}
