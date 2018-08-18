#include <stdio.h>

#define MINLINE 80 /* minimun input line length */
#define MAXLINE 100 /* maximum input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);


/* Print all lines bigger than MINLINE chars */

int main()
{
    char line[MAXLINE];
    int len;
    int big_line;

    big_line = 0;

    while ((len = getline(line,MAXLINE)) > 0) {
    
        if(len > MINLINE) {
            if(len == MAXLINE - 1)
                big_line = 1;

            printf("%s", line);
        }
        else if (big_line == 1 ) {
            big_line = 0;
            printf("%s", line);
        }   
    }

    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{

    int c, i;

    for (i = 0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;

    while((to[i] = from[i]) != '\0')
            ++i;
}
