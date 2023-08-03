#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    scanf("%c \n", &ch);
    char s[10];
    scanf("%s \n",&s);
    char str[100];
    scanf("%[^\n]%*c",str);
    printf("%c \n", ch);
    printf("%s \n",s);
    printf("%s", str);
        
    return 0;
}
