#include <stdio.h>

main(int argc, char const *argv[])
{
    // Main fonksiyonunun aldığı parametlerdir. argc argüman sayısını, argv ise argümanların dizisidir.
    // Kullanım şekline göre programın nasıl çalışması istendiğini gibi işlemlerin yapılmasını sağlar

    // 1. argüman değeri her zaman çalışan exenin yolu olduğu için 2. değerin var olup olmadığını kontrol ediyorum
    // Eğer 2. değer yoksa programı sonlandırıyorum
    if(argc < 2)
    {
        printf("Lutfen bir dosya surukleyerek veya baslangic parametresi vererek tekrar calistiriniz.\nOrnek Komut: 181312055_Odev3.exe Karamanoglu_Mehmetbey_Universitesi Bilgisayar_Muhendisligi");
        getch();
        return 0;
    }
    
    // Her bir argüman değerini ekrana yazdırıyorum
    for (int i = 0; i < argc; i++)
        printf("%d. arguman: %s\n", i + 1, argv[i]);
    
    getch();
}
