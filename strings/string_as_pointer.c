#include<stdio.h>
#include <string.h>
int main(){
    char str[] ="College wallah is best";
    char *ntr = str; //same adderes
    char *ptr = &str[0]; //same
    char *ytr = &str[1];
    char *gtr = &str[12];
    printf("%p\n",ptr);
    //printf("%p", ntr);
    printf("%p\n",ytr);
    printf("%p\n",gtr);
    
    return 0;
}