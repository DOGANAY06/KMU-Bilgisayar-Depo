#include <stdio.h>
#include <ctype.h>

main()
{
    char c; 
    for(int i = 32; i < 127; i++)
    {
        c = toascii(i);
        printf("%d\t%c\t%c\t%c\t%d\t%d\t%d\n", i, c, tolower(c), toupper(c), isdigit(c), isalpha(c), ispunct(c));
    }
    getch();
}
