#include <stdio.h>

#define IN  1
#define OUT 0
#define MAX_LENGTH 10

int main()
{
    int state, nlen[MAX_LENGTH], len, i, j;
    state = OUT;
    len = 0;
    char c;
    for (i = 0; i < MAX_LENGTH; ++i)
        nlen[i] = 0;


    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                if (len > MAX_LENGTH)
                    len = MAX_LENGTH;
                if (len > 0)
                    ++nlen[len-1];
            }
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            len = 1;
        } else if (state == IN) {
            ++len;
        }
    }
    if (state == IN) {
        if (len > MAX_LENGTH)
            len = MAX_LENGTH;
        ++nlen[len-1];
    }
    // horizontal
    for (i = 0; i < MAX_LENGTH; ++i) {
        if (i < MAX_LENGTH - 1)
            printf("%4d ", i+1);
        else
            printf(">=%2d ", i+1);
        for (j = 0; j < nlen[i]; ++j)
            printf("|");
        printf("\n");
    }

    // vertical
    int max = 0;
    for (i = 0; i < MAX_LENGTH; ++i) {
        if (nlen[i] > max)
            max = nlen[i];
    }

    for (j = max; j > 0; --j) {
        for (i = 0; i < MAX_LENGTH; ++i) {
            if (nlen[i] >= j)
                printf("-  ");
            else
                printf("   ");
        }
        printf("\n");
    }

    for (i = 0; i < MAX_LENGTH; ++i) {
        if (i == MAX_LENGTH-1)
            printf(">=");
        printf("%d  ", i+1);
    }
}
