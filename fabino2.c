#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 1, c , n = 20 count =10;
    printf("%d%d", a,b);
    while (a <= 2)
    {
        printf("%d",a);
        c= a + b;
        a = b;
        b = c;
    }
    
    
    return 0;
}
