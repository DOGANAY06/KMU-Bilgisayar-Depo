#include <stdio.h>
#include <ctype.h>

main()
{
    char str[5] = "F! 3";
    
    for(int i = 0; i < strlen(str); i++)
    {
        if(isalpha(str[i]))
            printf("%c karakterdir\n", str[i]);
        else if(isdigit(str[i]))
            printf("%c rakamdir\n", str[i]);
        else if(ispunct(str[i]))
            printf("%c imla karakteridir\n", str[i]);
        else if(isspace(str[i]))
            printf("%c bosluktur\n", str[i]);
    }
    
    getch();
}
