#include<stdio.h>
#include <string.h>
int main(){
    char s1[12] = "Physics";
    //deep copy
    char s2[12];
    strcpy(s2,s1);
    s2[0] = 'M';
    printf("%s\n", s2);

return 0;
}