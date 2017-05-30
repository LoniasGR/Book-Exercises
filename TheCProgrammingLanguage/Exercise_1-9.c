#include <stdio.h>

/*
 * Copy input to output.
 * If there are more than one blanks one
 * after another print only one of them.
 */

int main()
{
    int c, blank;

    blank = -1;
    while((c = getchar()) != EOF) {
        if (c == ' ')
            ++blank;
        if (c != ' ')
            blank = -1;
        if (blank <= 0)
            putchar(c);
    }   
}
