#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line and its size
 * If the line is too big, print only the first MAXLINES chars
 */
int main()
{
    int len; /* current line length */
    int max; /* maximum length seen so far */
    int startOfLine; /* boolean value to see if we are at the start
                        of a line, if the line is bigger than max */
    int currMax; /* Current line length, when line > MAXLINE */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */
    char currStart[MAXLINE]; /* start of the current line if line > max */
    
    max = 0;
    currMax = 0;
    startOfLine = 0;

    while ((len = getline(line, MAXLINE)) > 0) {
        if(len == MAXLINE-1) {
            if (startOfLine == 0) {
                startOfLine = 1;
                copy(currStart, line);
                currMax = len;
            }
            else 
                currMax = currMax + len;
        }
        else {
            if(startOfLine == 1) {
                startOfLine = 0;
                currMax = currMax + len;
                if(currMax > max) {
                    max = currMax;
                    copy(longest, currStart);
                }
            }
            else
                if(len > max) {
                    max = len;
                    copy(longest, line);
                }
        }
    }
    if (max > 0) /* there was a line */
        printf("Line size: %d\n%s", max, longest);

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
