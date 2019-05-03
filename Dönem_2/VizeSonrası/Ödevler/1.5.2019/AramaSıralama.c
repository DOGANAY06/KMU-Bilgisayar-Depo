/*
    İsim: Asrın Doğan 
    Öğrenci No: 181312055
    Tarih: 4/25/2019 22:52
    Ödev Açıklaması: Recursive Fonksiyonlar
    Kendi kendini çağırarak for veya while kullanabileceğimiz yerleri bir sayaç
    return kelimesi sayesinde döngü bloğu olmadan işimizi yapmamızı sağlayan fonksiyonlardır
*/
#include <stdio.h>

int Sum(int count)
{
    int number;
    printf("Toplanilacak sayiyi giriniz(%d tane kaldi): ", count);
    scanf("%d", &number);
    
    /* Eğer son sayıda ise direk olarak alınan sayıyı döndürüyor */
    if(count == 1)
        return number;
    /* Değilse alınan sayı + Sum fonksiyonu 1 eksik değer ile yeniden çağırılıyor */
    return number + Sum(count - 1);
}

int main(int argc, char const *argv[])
{
    int number;
    printf("Kac sayi toplanilacak?\n");
    scanf("%d", &number);

    printf("Toplam: %d\n", Sum(number));

    getch();
    return 0;
}
