#include <stdio.h>

main()
{
    int wholeNum, decimalNum = 0;

    printf("Ondalikli bir sayi giriniz: ");
    scanf("%d.%d", &wholeNum, &decimalNum); // Bu hile kabul edersiniz umarım hocam 

    printf("Tam degeri = %d\nOnlikli degeri = %d", wholeNum, decimalNum);
    getch();
}
