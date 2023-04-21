#include <stdio.h>
void england()
{
    printf("you are in england\n");
    return;
}
void australia()
{
    printf("You are in austrialia\n");
    england();
    return;
}
void india(){
    printf("You are in india\n");
    australia();
    return;
}
int main(int argc, char const *argv[])
{
    india();
    return 0;
}

