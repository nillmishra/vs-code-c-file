#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = -1, b = 1, c , n = 20, counter;
    for (int i = 1; i < n; i++)
    {
                c= a + b;
        printf(" %d ", c);
        a = b;
        b = c;
    }
    return 0;
}
