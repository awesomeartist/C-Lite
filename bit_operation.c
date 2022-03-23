#include "stdio.h"

int main(void)
{

#if 0
    int binary  = 0b1010;
    int decimal = 10;
    int octal    = 012;
    int hex     = 0xa;
    printf("the binary number 0b1010 convert to decimal number = %d\n", binary);
    printf("the octal number 012 convert to decimal number = %d\n", octal);
    printf("the hexadecimal number 0xa convert to decimal number = %d\n",hex);
#elif 1
    char a = -1;
    printf("a = %d\n",a);
     a>>=8; //b>>8 错误做法，仅仅将b拿出来进行移位操作，未存回去，b的值未改变
    printf("a = %d\n",a);

    unsigned char b = -1;
    printf("b = %d\n", b);
    b>>=8;
    printf("b = %d\n", b);

#endif
    return 0;
}