#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 1, b = 1, c , n = 20, counter;
    printf("%d%d", a,b);
    for ( counter = 2; counter < n; counter++)
    {
        c= a + b;
        prinf("%d",c);
        a = b;
        b = c;

    }
    
    return 0;
}
