#include <stdio.h>

/* 
 * Print a histogram of letters and numbers
 * in the input 
 */

int main() 
{
    int c, i, j, characters[24], numbers[10];
    
    for (i = 0; i < 24; i++)
        characters[i] = 0;
    for (i = 0; i < 10; i++)
        numbers[i] = 0;

    while((c = getchar()) != EOF) {
        
        if (c >= 'a' && c <= 'z')
            characters[c - 'a']++;
        if (c >= 'A' && c <='Z')
            characters[c - 'A']++;
        if (c >= '0' && c <= '9')
            numbers[c - '0']++;

    }

    for (i = 0; i < 24; i++) {
        putchar('a' + i);
        putchar('\t');
        for (j = 0; j < characters[i]; j++)
            putchar('@');
        putchar('\n');
    }

    putchar('\n');
    
    for (i = 0; i < 10; i++) {
        putchar('0' + i);
        putchar('\t');
        for(j = 0; j < numbers[i]; j++)
            putchar('@');
        putchar('\n');
    }
}
