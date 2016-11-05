#include <stdio.h>

#define TABINC 4

int main()
{
    int pos, nb;
    char c;
    pos = nb = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            nb = TABINC - (pos % TABINC);
            while (nb > 0) {
                putchar('_');
                ++pos;
                --nb;
            }
        } else if (c == '\n'){
            putchar(c);
            pos = 0;
        } else {
            putchar(c);
            ++pos;
        }
    }
}
