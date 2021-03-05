/**************************************************
 * Filename         :row_plot.c
 * Description      :水平方向的单词长度直方图
 * Time             :2021/02/17 10:31:32
 * Author           :promenader
***************************************************/
#include <stdio.h>
#define IN 1
#define OUT 0
int main(int argc, char const *argv[])
{
    int c;
    int state = OUT;
    int length = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
            {
                printf("\t");

                for (; length > 0; length--)
                {
                    printf("*");
                }
                printf("\n");
            }

            state = OUT;
        }
        else
        {
            if (state == OUT)
            {
                length = 0;
            }
            state = IN;
            length++;
            putchar(c);
        }
    }

    return 0;
}
