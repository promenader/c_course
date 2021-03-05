/**************************************************
 * Filename         :count2.c
 * Description      :统计空格，制表符，行数
 * Time             :2021/02/16 21:39:55
 * Author           :promenader
***************************************************/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c;
    long cnt_blank = 0, cnt_tab = 0, cnt_line = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            cnt_blank++;
        if (c == '\t')
            cnt_tab++;
        if (c == '\n')
            cnt_line++;
    }
    printf("blank count:%ld\n", cnt_blank);
    printf("tab count:%ld\n", cnt_tab);
    printf("line count:%ld\n", cnt_line);

    return 0;
}
