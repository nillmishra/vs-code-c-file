#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[20] ="Collegewahllah";
    str[1] = 98;
    str[0]='M';
    int i = 0;
    while (str[i]!='\0'){
        printf("%c", str[i]);
        //printf("%c", i[str]);
        //printf("%c", *(str + i));
        i++;
    }
    return 0;
}
