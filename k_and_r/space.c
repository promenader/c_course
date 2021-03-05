/**************************************************
 * Filename         :space.c
 * Description      :将输入中多个空格符替换成一个空格符
 * Time             :2021/02/16 21:47:56
 * Author           :promenader
***************************************************/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c;
    int in = 0; //标记是否是空格
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (in == 0)
            {
                putchar(' ');
            }
            in = 1; //进入空格
            continue;
        }
        else
        {
            in = 0; //跳出空格
            putchar(c);
        }
    }

    return 0;
}
