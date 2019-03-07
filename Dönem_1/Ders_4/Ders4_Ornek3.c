#include <stdio.h>

main()
{
    
    // Hocanın Yaptığı
    char i;
    
    for(i = 'A'; i < 'Z'; i++)
        printf("%c => %d\n", i, i);
    
    getch();

    /* Benim Yaptığım
    char a = 'a';
    
    do
    {
        printf("%c => %d\n", a, a);
    } 
    while (a++ != 'z');
    */
}