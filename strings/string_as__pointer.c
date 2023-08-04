#include<stdio.h>
#include <string.h>
int main(){
    char str[] ="College wallah is best";
    //char *ptr = "College wallah is best";
    char *ptr = str; 
    int i =0;
    while (*ptr != '\0') //*ptr mtlb value utha k lana
    {
        printf("%c", *ptr); //%p address print hoga or ptr s garbage value
        ptr++; //address +
        i++;
    }
    return 0;
}