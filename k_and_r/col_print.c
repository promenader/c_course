/**************************************************
 * Filename         :col_print.c
 * Description      :打印垂直方向的直方图
 * Time             :2021/02/19 21:31:39
 * Author           :promenader
***************************************************/
#include <stdio.h>
#include <string.h>
#define NUM 100
void print_blank(int n);
int max(int *array, int len)
{
    int maxValue = 0;
    int i = 0;
    for (i = 0; i < len; i++)
    {
        if (array[i] > maxValue)
        {
            maxValue = array[i];
        }
    }
    return maxValue;
}
void vertical(int array[], int len, char temp[][100])
{
    int maxValue = max(array, len);
    int i, j;

    for (i = maxValue + 1; i > 0; i--)
    {
        printf("%2d|  ", i);
        for (j = 0; j < len; j++)
        {
            if (array[j] >= i)
            {
                printf("*");
                print_blank(array[j]);
            }
            else
            {
                print_blank(array[j] + 1);
            }
        }
        printf("\n");
    }
    for (i = len; i > 0; i--)
    {
        printf("------");
    }
    printf("\n   ");
    for (i = 0; i <= len - 1; i++)
    {
        printf("%s ", temp[i]);
    }
    printf("\n");
}
void print_blank(int n)
{
    int i = 0;
    while (i < n)
    {
        printf(" ");
        i++;
    }
}
int main(int argc, char const *argv[])
{
    int words[NUM];
    char temp[NUM][100];
    int i = 0;
    int num = 0;
    printf("please input words:");
    while (1)
    {
        if (scanf("%s", temp[num]) == EOF)
            break;
        else
            num++;
    }

    printf("\nthe total words: %d\n", num);

    for (i = 0; i < num; i++)
    {
        words[i] = strlen(temp[i]);
    }
    int maxValue = max(words, num);
    vertical(words, num, temp);

    return 0;
}
