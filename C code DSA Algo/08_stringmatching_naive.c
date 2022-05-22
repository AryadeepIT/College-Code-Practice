#include<stdio.h>
#include<string.h>

int main()
{
    char a[100], b[100];
    int position;
    printf("Enter text : ");
    gets(a);
    printf("Enter pattern : ");
    gets(b);
    position = Match(a, b);
    if ( position != -1)
        printf("\nString found at location : %d \n", (position + 1));
    else
        printf("\nString not found ! \n");
    return 0;
}


int Match(char text[], char pattern[])
{
    int text_length, pattern_length, c, d, position, e;
    text_length = strlen(text);
    pattern_length = strlen(pattern);
    if(pattern_length > text_length)
        return(-1);
    for(c=0; c <=(text_length - pattern_length); c++)
    {
        position = e = c;
        for(d=0; d < pattern_length; d++)
        {
            if(pattern[d] == text[e])
                e++;
            else
                break;
        }
        if(d == pattern_length)
            return (position);
    }
    return (-1);
}
