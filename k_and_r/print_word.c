/**************************************************
 * Filename         :print_word.c
 * Description      :输入的单词每行输出一个
 * Time             :2021/02/16 22:09:18
 * Author           :promenader
***************************************************/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c;
    int state = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == 1)
            {
                printf("\n");
            }
            state = 0;
        }
        else
        {
            state = 1;
            putchar(c);
        }
    }

    return 0;
}
