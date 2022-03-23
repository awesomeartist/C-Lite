#include <stdio.h>


int main(void)
{
    char *p = "hello world!\n";
    //const char *p = "hello world!\n";
    char buf[] = {"hello world!\n"};
    char *p2 = buf;

    printf("the one is %x\n",*p);

    *p2 = 'a';
    printf("the %s\n",*p2);

    
    return 0;
}