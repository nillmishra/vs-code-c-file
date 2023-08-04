#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 5, b =6;
    
    printf("%p \n",&a); //%p se address print hota hai
    printf("%d \n",&a);
    printf("%p\n", a);
    printf("%p \n",&b);
    int* x = &a; //*x se address dtore hota hai 
    *x = 25; //*x ka mtlb uss address ka value uthana
    printf("%p \n",x);// a ka adress print kar k dega
    printf("%p\n", &x);// x ka address print hoga
    printf("%d \n",*x);// x k andar jis bhi varuable kaa adress store hai uss kaaa value print kar d
    printf("%d \n",a);
    return 0;
}
