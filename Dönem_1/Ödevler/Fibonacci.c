#include <stdio.h>

main()
{
    int firstNumber, secondNumber, newNumber, counter;

    // Fibonacci Sayı Dizisinin ilk 0 ve 1. elemanları
    firstNumber = 0;
    secondNumber = 1;

    // Kullanıcıdan adım sayısı girişi
    printf("Fibonacci Sayi Dizisi\nAdim Sayisini Giriniz: ");
    scanf(" %d", &counter);

    // Döngüyü -1'den başlatma sebebim 0'ında yazılmasını sağlamak için
    // Fibonacci Sayı Dizisi'nin 1. değeri 1 olmasına rağmen 0'. değeri 0 olduğu için
    // Ekleme ihtiyacı duydum.
    // i = 0 ve printf("%d\n", secondNumber); olarak değiştirilerek başlangıç 1 1 2 3...
    // şeklinde yazdırılabilir.
    for(int i = -1; i < counter; i++)
    {
        printf("%d\n", firstNumber);
        newNumber = firstNumber + secondNumber;
        firstNumber = secondNumber;
        secondNumber = newNumber;
    }

    getch();
}