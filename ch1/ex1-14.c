#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
    int state, nletter[26];
    char c;

    int i,j;
    for (i = 0; i < 26; ++i)
        nletter[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z')
            ++nletter[c - 'a'];
        else if (c >= 'A' && c <= 'Z')
            ++nletter[c - 'A'];
    }

    for (i = 0; i < 26; ++i) {
        printf("%c ", 'a'+i);
        for (j = 0; j < nletter[i]; ++j)
            printf("|");
        printf("\n");
    }
}
