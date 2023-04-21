#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[10] = {98, 32, 43 , 65, 32 ,89 ,99 , 65, 45, 55 };
    for (int i = 0; i < 10; i++)
    {
        if ( marks[i] < 35)
        {
            printf("%d ", marks[i]);
        }
        
        
    }
    
    return 0;
}
