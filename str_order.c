#include <stdio.h>
#include <stdlib.h>


void print_str(char p)
{



}

int main(void)
{
    char *str;
    str = (char *)malloc(sizeof(char)*10);
    printf("please input a string:");
    scanf("%s\n",str);
    printf("the string is:%s",*str);

    return 0;
}