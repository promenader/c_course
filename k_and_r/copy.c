/**************************************************
 * Filename         :copy.c
 * Description      :从输入复制字符到输出
 * Time             :2021/02/15 21:14:11
 * Author           :promenader
***************************************************/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c;
    //getchar()函数从标准输入中读取一个字符
    while ((c = getchar()) != EOF)
    {
        //打印一个字符到标准输出
        putchar(c);
    }

    return 0;
}
