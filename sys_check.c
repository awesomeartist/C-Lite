#include <stdio.h>

int main(void)
{

    //用于查看计算机存储方式为大端或小端模式
    int a = 0x12345678;
    //使用unsigned char来验证int的每一个字节
    unsigned char *p1 = (unsigned char*)&a;   //获取a的首地址
    unsigned char *p2 = (unsigned char*)&a+1; //获取a的首地址的后一个字节地址
    unsigned char *p3 = (unsigned char*)&a+2; //获取a的首地址的后两个字节地址
    unsigned char *p4 = (unsigned char*)&a+3; //获取a的首地址的后三个字节地址
    printf("[a] p1:%x, %x\r\n", p1, *p1); //打印p1的地址与存储的字节内容
    printf("[a] p2:%x, %x\r\n", p2, *p2); //打印p2的地址与存储的字节内容
    printf("[a] p3:%x, %x\r\n", p3, *p3); //打印p3的地址与存储的字节内容
    printf("[a] p4:%x, %x\r\n", p4, *p4); //打印p4的地址与存储的字节内容


    return 0;
}