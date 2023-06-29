#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i=0, j=1;
    while (i<=5)
    {
        while (j <= 10)
        {
            printf("%d\n", j++);
        }
        printf("%d\n", i++);
    }
    
    return 0;
}


