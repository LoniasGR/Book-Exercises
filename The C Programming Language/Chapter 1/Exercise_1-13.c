#include <stdio.h>

/*
 * Make a histogram with the size
 * of each word from the input.
 */

int main() 
{   
    int c, lc, i;

    lc = 0; /* letter counter */

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (lc != 0) {
                for (i = 0; i < lc; i++)
                    putchar('@');
                putchar('\n');
                lc = 0;
            }
        }
        else 
            lc++;
    }
}
