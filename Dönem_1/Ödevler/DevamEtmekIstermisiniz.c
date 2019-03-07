#include <stdio.h>

main()
{
    float firstNumber, secondNumber, sum;
    char selection;
    
    // İlk sayının Girişi
    printf("Ilk Sayiyi Giriniz\n");
    scanf("%f", &firstNumber);

    // Toplamı ilk sayıya eşitliyorum ki Do While döngüsünden dolayı devamında gelecek olan sayıları sadece üzerine ekliyeyim
    sum = firstNumber;

    do
    {
        // Kullanıcıdan sayı girişi
        printf("Eklenecek Sayiyi Giriniz\n");
        scanf("%f", &secondNumber);

        sum += secondNumber;
        
        // Kullanıcıdan seçim girişi
        printf("Toplamaya Devam Etmek Ister Misiniz? (Devam Etmek Icin 'e' Yaziniz)\n");
        scanf(" %c", &selection);
    }
    while (selection == 'e');
    
    printf("Toplam = %f", sum);

    getch();
}