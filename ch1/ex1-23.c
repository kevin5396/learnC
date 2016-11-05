#include <stdio.h>

void rmcmt(char c);
void inquote(char c);
void incmt();
int main()
{
    char c;
    while ((c = getchar()) != EOF) {
        rmcmt(c);
    }
}

void rmcmt(char c)
{
    char d;
    if (c == '/') {
        if ((d = getchar()) == '*')
            incmt();
        else if (d == '/') {
            putchar(c);
            rmcmt(d);
        } else {
            putchar(c);
            putchar(d);
        }
    } else if (c == '\'' || c == '"') {
        inquote(c);
    }
    else
        putchar(c);
}

void incmt()
{
    char c,d;
    c = getchar();
    d = getchar();
    while (c != EOF && d != EOF && c != '*' && d != '/') {
        c = d;
        d = getchar();
    }
}

void inquote(char c)
{
    char d;

    putchar(c);
    while ((d = getchar()) != c && d != EOF) {
        putchar(d);
    }
    if (d != EOF)
        putchar(d);
}
