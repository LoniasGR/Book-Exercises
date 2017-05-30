#include <stdio.h>
    
    /*
     * Verify that getchar() != EOF is 0 or 1
     */

int main() 
{
    int is_not_EOF;
    /* If getchar() reads EOF then in_not_EOF is 0
     * else it is 1 */
    is_not_EOF = (getchar() != EOF);
    printf("getchar value: %d\n", is_not_EOF);
    
}
