#include <stdio.h>
#define MAXLINE 1000
int getinputline(char line[], int maxline);
void copyline(char *to, char *from);
int main(int argc, char const *argv[])
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    max = 0;
    while ((len = getinputline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
    {
        printf("%s", longest);
    }

    return 0;
}

int getinputline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}
void copyline(char *to, char *from)
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
   {
        i++;
    }
}