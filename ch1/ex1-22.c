#include <stdio.h>

#define TABINC 8
#define MAXCOL 10

char line[MAXCOL+1];
int pos;

void print(int pos);
int main()
{
    char c;
    pos = 0;

    while ((c = getchar()) != EOF) {
        line[pos] = c;

        if (c == '\t') {
            line[pos] = ' ';
            while (pos < MAXCOL && (pos % TABINC) != 0)
                line[pos++] = ' ';
            if (pos >= MAXCOL)
                print(pos);
        } else if (c == '\n') {
            print(pos+1);
            pos = 0;
        } else if (++pos >= MAXCOL) {
            while (pos >= 0 && line[pos] != ' ')
                --pos;
            if (pos <= 0)
                pos = MAXCOL;
            else
                pos = pos + 1;
            print(pos);
            if (pos <= 0 || pos >= MAXCOL)
                pos = 0;
            else {
                int i,j;
                for (i = 0, j = pos; j < MAXCOL;)
                    line[i++] = line[j++];
                pos = i;
            }
        }
    }
}
void print(int pos)
{
    int i;
    for (i = 0; i < pos; ++i)
        putchar(line[i]);
    if (pos > 0 && line[i-1] != '\n')
        putchar('\n');
}
