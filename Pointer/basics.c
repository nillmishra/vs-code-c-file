#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 5, b =6;
    printf("%d \n",a);
    int* x = &a; //*x se address dtore hota hai 
    *x = 25; // a is changed
    printf("%d \n",a);
    printf("%p \n",&a);
    printf("%p \n",x);// a ka adress print kar k dega
    printf("%p\n", &x);// x ka address print hoga
    printf("%d \n",*x);// x k andar jis bhi varuable kaa adress store hai uss kaaa value print kar d
    return 0;
}
 