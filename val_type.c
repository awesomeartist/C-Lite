#include <stdio.h>

int main(void)
{
    long long a ;

    a = 0;
    printf("a = %d \nthe size of a = %d\n",a, sizeof a);

    a = 123456L;
    printf("a = %d \nthe size of a = %d\n",a, sizeof a);

    a = 123456;
    printf("a = %d \nthe size of a = %d\n",a, sizeof a);

    return 0;
}