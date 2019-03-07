#include <stdio.h>

main()
{
    int firstNumber, secondNumber, OBEB = 1, OKEK = 1, theHighest, i;

    // Kullanıcı Girişleri
    printf("Sirasiyla OBEB ve OKEK'leri Bulunacak Iki Sayiyi Giriniz\n");
    scanf("%d\n%d", &firstNumber, &secondNumber);

    // OBEB için en küçük değerin yeterli olmasına rağmen OKEK için en büyük değere ihtiyacım vardı.dd
    // En küçük değer için yeni bir değişken oluşturmaktansa sadece en büyük değeri saklamayı tercih ettim. 
    theHighest = (firstNumber < secondNumber) ? firstNumber : secondNumber;
    
    // OBEB
    for(i = 2; i <= theHighest; i++)
        if(firstNumber % i == 0 && secondNumber % i == 0 && OBEB < i)
            OBEB = i;

    // OKEK
    // Aynı for döngüsünün içine almama sebebim eğer OBEB ile aynı döngünün içerisinde olsaydı,
    // kullanıcıdan aldığım değerler değişeceğinden OBEB yanlış çıkacaktı.
    // Bunu engellemek için ya iki yeni değişken daha oluşturacaktım, ya da iki farklı 
    // döngü içerisinde kullanıcaktım çünkü aklıma daha farklı bir yol gelmedi.
    for(i = 2; i <= theHighest; i++)
        while(firstNumber % i == 0 || secondNumber % i == 0)
        {
            if(firstNumber % i == 0)
                firstNumber /= i;
            if(secondNumber % i == 0)
                secondNumber /= i;
            OKEK *= i;
        }
    
    printf("OBEB = %d\nOKEK = %d", OBEB, OKEK);

    getch();
}