#include <stdio.h>
#define charLimit 20

main()
{
    char decision = '-';
    int studentCount = 0;
    float scores[10][3] = {0}, toplam;
    char names[10][charLimit] = {0};
    char surnames[10][charLimit] = {0};
    while(studentCount < 10 && decision != 'd')
    {
        do
        {
            printf("%d. ogrencinin vize ve final notlarini sirayla giriniz\n", studentCount + 1);
            scanf("%f\n%f", 
                &scores[studentCount][0], 
                &scores[studentCount][1]
            );

            if( scores[studentCount][0] < 0 || scores[studentCount][0] > 100 || 
                scores[studentCount][1] < 0 || scores[studentCount][1] > 100)
                printf("Notlari kontrol ediniz\n");
        } while (
            scores[studentCount][0] < 0 || scores[studentCount][0] > 100 || 
            scores[studentCount][1] < 0 || scores[studentCount][1] > 100
        );
        
        scores[studentCount][2] = scores[studentCount][0] * 0.4 + scores[studentCount][1] * 0.6;
        studentCount++;
        printf("Ogrenci eklemeyi birakmak icin d, devam etmek icin herhangi bir tusa basiniz\n");
        decision = getch();
    }
    
    do
    {
        printf("1-Bilgi Girisi\n2-Bilgi Listesi\n3-Bilgi Silme\n4-Cikis\nSeciminiz [1-4]: ");
        scanf(" %c", &decision);

        switch (decision)
        {
            case '1':
                printf("%d tane ogrenci bulundu. Hangi ogrencinin bilgisini girmek istiyorsunuz?\n", studentCount);
                scanf("%d", &decision);
                decision--;
                if(decision < 0 || decision >= studentCount)
                    printf("Uygunsuz Giris");
                else
                {
                    printf("%d. ogrencinin adi ve soyadi'ni sirayla giriniz\n", decision + 1);
                    scanf("%s\n%s", &names[decision],  &surnames[decision]);

                    printf("Bilgiler guncellendi\n");
                }
                decision = '-';
                getch();
                break;

            case '2':
                for(int i = 0; i < studentCount; i++)
                {
                    printf("%d. Ogrencinin ", i + 1);
                    if(names[i][1] != 0)
                        printf("\tAdi: %s\tSoyadi: %s", names[i], surnames[i]);
                    printf("\tVizesi: %g\tFinali: %g\tGecme Notu: %g\n", 
                        scores[i][0], 
                        scores[i][1], 
                        scores[i][2]
                    );
                }

                toplam = 0;
                for(int student = 0; student < studentCount; student++)
                    toplam += scores[student][0];
                printf("Sinifin Vize ortalamasi: %f\n", toplam / studentCount);

                toplam = 0;
                for(int student = 0; student < studentCount; student++)
                    toplam += scores[student][1];
                printf("Sinifin Final ortalamasi: %f\n", toplam / studentCount);

                toplam = 0;
                for(int student = 0; student < studentCount; student++)
                    toplam += scores[student][2];
                printf("Sinifin Gecme Notu ortalamasi: %f\n", toplam / studentCount);
                
                decision = '-';
                getch();
                break;

            case '3':
                printf("%d tane ogrenci bulundu. Hangi ogrencinin bilgisini girmek istiyorsunuz?\n", studentCount);
                scanf("%d", &decision);
                decision--;
                if(decision < 0 || decision >= studentCount)
                    printf("Uygunsuz Giris");
                else
                {
                    for(int i = 0; i < charLimit; i++)
                    {
                        names[decision][i] = 0;
                        surnames[decision][i] = 0;
                    }
                    printf("Bilgiler guncellendi\n");
                }
                decision = '-';
                getch();
                break;

            case '4':
                break;

            default:
                printf("Uygunsuz Giris\n");
                break;
        }
    } while (decision != '4');

    printf("Cikis Yapildi");
    getch();
}