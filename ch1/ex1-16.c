#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);
int rstrip(char line[], int len);
void reverse(char line[], int len);

int main()
{
    int len, max;
    char line[MAXLINE], longest[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0){
        if (len > max) {
            max = len;
            copy(longest, line);
        }
        if (len > 80) {
            printf(">80: %s\n", line);
        }
        if ((len = rstrip(line, len)) > 0) {
            printf("remove trailing blanks: %s\n", line);

            reverse(line, len);
            printf("reversed: %s\n", line);
        }
    } 

    if (max > 0) {
        printf("%s\n", longest);
        printf("length is : %d\n", max);
    }
}

int get_line(char line[], int maxline)
{
    int c, i, l;
    i = l = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        if (i < maxline - 1)
            line[i++] = c;
        l++;
    }

    if (i < maxline - 1 && c == '\n')
        line[i++] = '\n';
    line[i] = '\0';
    return l;
}

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

int rstrip(char line[], int len)
{
    char c;
    for (; len > 0;) {
        c = line[len-1];
        if (c == ' ' || c == '\t' || c == '\n')
            --len;
        else
            break;
    }
    line[len] = '\0';
    return len;
}

void reverse(char line[], int len)
{
    if (len < 1)
        return;
    int i;
    char c;
    for (i = 0; i < len/2; ++i) {
        c = line[i];
        line[i] = line[len-i-1];
        line[len-i-1] = c;
    }
}
