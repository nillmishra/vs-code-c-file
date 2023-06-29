#include <stdio.h>
 int main(int argc, char const *argv[])
 {
    int i, j;
    do
    {
        j = 1;
        do
        {
            printf("%d\n", i*j);
            j = j +1;
        } while (j <= 5);
        
    } while (i <=5);
    i = i +1;
    
    return 0;
 }
 