#include <stdio.h>

#define TABINC 8

int main()
{
    int nb, nt, pos;
    char c;
    nb = nt = pos = 0;

    while ((c = getchar()) != EOF) {
        ++pos;
        if (c == ' ') {
            if (pos % TABINC == 0) {
                nb = 0;
                ++nt;
            } else {
                ++nb;
            }
        } else {
            while (nt > 0) {
                putchar('\t');
                --nt;
            }
            if (c == '\t') /* this tab can cover blanks */
                nb = 0;
            while (nb > 0) {
                putchar(' ');
                --nb;
            }
            putchar(c);

            if (c == '\n')
                pos = 0;
            else if (c == '\t')
                pos += TABINC - (pos % TABINC);
        }
    }
}
