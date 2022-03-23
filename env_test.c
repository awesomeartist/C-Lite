
#include "stdio.h"
#include "stdlib.h"

int Sum(int num1,int num2);

int main(){

    int num1 = 1;
    int num2 = 3; 
    int sum = 0; 
    sum = num1 + num2;
    
    printf("Hello World!\n");
    
    printf("num1 + num2 =%d\n",sum);
    printf("num1 + num2 =%d\n",Sum(num1,num2));


    return 0;
}

int Sum(int num1,int num2){

    return num1 + num2;

}
