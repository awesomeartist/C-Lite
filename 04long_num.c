#include <stdio.h>

int main(void)
    {
        long long a;
        long long b = 100000;
        long long c = 640000;

        a=0;
        printf("a = %d \nthe size of a = %d\n",a, sizeof a);

        a = 100000*640000;
        printf("a = %d \nthe size of a = %d\n",a, sizeof a);

        a = a*b;
        printf("a = %d \nthe size of a = %d\n",a, sizeof a);

        return 0;
    }