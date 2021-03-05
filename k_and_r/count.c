/**************************************************
 * Filename         :count.c
 * Description      :统计字符数量
 * Time             :2021/02/15 21:29:49
 * Author           :promenader
***************************************************/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
    {
        nc++;
    }
    printf("%ld\n", nc);

    return 0;
}
