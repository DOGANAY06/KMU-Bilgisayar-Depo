#include <stdio.h>

main()
{
    // Tamamen boş bir karakter dizisi oluşturuyorum.
    // İlginç bir şekilde " = {0}"ı kaldırınca dizinin içinde 
    // rastgele karakterler oluşuyor.
    char input[128] = {0};
    int wordCount = 0, letterCount = 0, counter = 0;

    // Kullanıcıdan cümle girişi
    printf("Bir Cumle Yaziniz\n");
    gets(input);
    
    while(counter < 128)
    {
        if(input[counter] == ' ')
            wordCount++;
        else if(input[counter])
        {
            letterCount++;
            // Eğer cümlenin başında bir karakter var ise ve henüz bir cümle yok ise
            // Burada Boşluk karakteri kullanılmadığı için otomatik olarak 
            // kelime sayısını 1 arttırıyorum.
            if(wordCount == 0)
                wordCount++;
        }
        counter++;
    }

    printf("\nGirilen Cumledeki\nKelime Sayisi = %d\nKarakter Sayisi = %d", wordCount, letterCount);

    getch();
}