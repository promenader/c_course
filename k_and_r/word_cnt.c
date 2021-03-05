/**************************************************
 * Filename         :word_cnt.c
 * Description      :统计字符，行数，单词的个数
 * Time             :2021/02/16 21:53:59
 * Author           :promenader
***************************************************/
#include <stdio.h>
#define IN 1
#define OUT 0
int main(int argc, char const *argv[])
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        nc++;
        if (c == '\n')
            nl++;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            nw++;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}
