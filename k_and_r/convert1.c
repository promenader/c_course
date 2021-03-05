/**************************************************
 * Filename         :convert1.c
 * Description      : 打印摄氏度到华氏度的转换
 * Time             :2021/02/12 22:28:26
 * Author           :promenader
***************************************************/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
