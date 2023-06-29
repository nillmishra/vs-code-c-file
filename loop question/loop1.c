#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j;
    for (i=1; i<=4; i++)
    {
        for (j = 1; i <=5; i+1)
            {
        printf("%d ", i*j);  
            }
    printf("\n");
    }

    return 0;
}
