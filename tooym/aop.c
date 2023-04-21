#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 100;
    for (int i = 1; a > 0 ; i++)
    {
        printf("%d ", a);
        a = a -3;
    }
    
    
    return 0;
}
