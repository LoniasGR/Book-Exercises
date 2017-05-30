#include <stdio.h>

/*
 * Copy input to output.
 * Replace: tab by \t,
 * blank by \b and backslash by \\.
 */

int main() 
{
    int c;
    
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            c = 't';
        }
        if (c == ' ') {
            putchar('\\');
            c = 'b';
        }
        if (c == '\\')
            putchar('\\');
        putchar(c);
    }
}
