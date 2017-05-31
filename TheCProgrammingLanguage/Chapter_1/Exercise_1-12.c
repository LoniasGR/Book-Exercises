#include <stdio.h>

#define IN  1 /* inside a word */
#define OUT 0 /* outsude a word */

/*
 * Copy input to output 
 * One word per line
 */

int main() 
{
    int c, state;

    state = OUT;
    
    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            putchar('\n');
        }
        else { 
            state = IN;
            putchar(c);
        }
    }
}
