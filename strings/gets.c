#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[20];
    gets(str);
    //scanf("%s", str); // only first word w9ill considered

    //scanf("%[^\n]s", str);
    //printf("%s", str);
    puts(str);
    puts("Hello Baby");
    return 0;
}