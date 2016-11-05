#include <stdio.h>

int npar, nbracket, nbrace;

void check(char c);
void inquote(char c);
void incmt();
int main()
{
    char c;
    npar = nbracket = nbrace = 0;
    while ((c = getchar()) != EOF) {
        if (c == '/') {
            if ((c = getchar()) == '*')
                incmt();
            else
                check(c);
        } else if (c == '\'' || c == '"') {
            inquote(c);
        } else
            check(c);
    }
    if (npar != 0)
        printf("unbalanced parentheses.\n");
    if (nbracket != 0)
        printf("unbalanced brackets.\n");
    if (nbrace != 0)
        printf("unbalanced braces.\n");
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
    char p = c;
    while ((d = getchar()) != c && d != EOF) {
        if (d == '\\')
            getchar();
    }
}

void check(char c)
{
    switch (c) {
    case '(':
        ++npar;
        break;
    case ')':
        --npar;
        break;
    case '[':
        ++nbracket;
        break;
    case ']':
        --nbracket;
        break;
    case '{':
        ++nbrace;
        break;
    case '}':
        --nbrace;
        break;
    default:
        break;
    }
}
