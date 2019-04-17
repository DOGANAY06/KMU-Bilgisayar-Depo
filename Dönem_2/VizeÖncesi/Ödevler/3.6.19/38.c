#include <stdio.h>
#include <windows.h>

main()
{
    
    srand(time(NULL));
    int randomInt;
    HANDLE hConsole;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 7);

    while(1)
    {
        randomInt = rand() % 100;
        if(randomInt % 2 == 0)
            SetConsoleTextAttribute(hConsole, 4);
        else
            SetConsoleTextAttribute(hConsole, 7);
        printf("%d\n", randomInt);
        if(kbhit())
        {
            // Klavyeye basıldığında getch almazsam direk alttaki getch'yi tetikliyor
            getch();
            break;
        }
        sleep(1);
    }
    SetConsoleTextAttribute(hConsole, 7);
    
    printf("Sonlandirildi\n");

    getch();
}