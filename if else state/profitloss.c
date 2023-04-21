#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sp , cp;
    printf ("Enter the selling price : ");
    scanf("%d", &sp);
    printf ("Enter the cost price : ");
    scanf("%d", &cp);
    if (cp < sp)
    {
        printf ("Then you are in profit\n");
        int profit;
          printf ("your profit is %d rs", sp - cp);
    }
    else if (cp == sp)
    {
        printf ("no profit no loss");
    }
    
    else{
        printf("You are in loss");
        printf ("your profit is %d rs", cp - sp);
    }

    
    return 0;
}
