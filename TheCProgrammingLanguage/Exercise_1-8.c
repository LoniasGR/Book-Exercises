#include <stdio.h>

/* 
 * Program that counts blanks, 
 * tabs and newlines.
 */

int main()
{
    int c, nl, bl, tb;

    nl = 0;
    bl = 0;
    tb = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++bl;
        if (c == '\t')
            ++tb;
    }
    printf("Newlines: %d\n"
            "Blanks: %2d\n"
            "Tabs: %4d\n",
            nl, bl, tb);
}
