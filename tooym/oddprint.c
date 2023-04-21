#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a= 1;
    for (int i = 1; a < 100 ; i++)
    {
        printf("%d\n", a);
        a = a+2;
    }
    
    return 0;
}
