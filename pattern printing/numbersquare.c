#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n ;
    printf("Enter the number of line: ");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        for (int  i = 1; i <=n; i++)
        {
        printf("%d ", i);
        }
        printf("\n");
    }
    
    
    
    return 0;
}
