#include <stdio.h>
#include <math.h>

main()
{
    int studentCount, classCount, lowestNumber = 0, highestNumber = 0;
    float result;

    printf("Ogrenci ve Ders sayilarini sirayla giriniz\n");
    scanf("%d\n%d", &studentCount, &classCount);

    float SCMatrix[studentCount][classCount], studentMeanScore[studentCount], classMeanScore[classCount];
    
    for(int student = 0; student < studentCount; student++)
        for(int class = 0; class < classCount; class++)
        {
            printf("Ogrenci %d, Ders %d notunu giriniz: ", student + 1, class + 1);
            scanf("%f", &SCMatrix[student][class]);
        }
    
    // 1. Bölüm
    printf("\n");
    for(int class = 0; class < classCount; class++)
    {
        result = 0;
        for(int student = 0; student < studentCount; student++)
            result += SCMatrix[student][class];
        printf("%d. Dersin Aritmetik Ortalamasi: %g\n", class + 1, result / studentCount);

        result = 1;
        for(int student = 0; student < studentCount; student++)
            result *= SCMatrix[student][class];
        printf("%d. Dersin Geometrik Ortalamasi: %g\n", class + 1, pow(result, 1.0 / studentCount));

        result = 0;
        for(int student = 0; student < studentCount; student++)
            result += 1.0 / SCMatrix[student][class];
        printf("%d. Dersin Harmonik Ortalamasi: %g\n", class + 1, studentCount / result);
    }
    
    // 2. Bölüm
    printf("\n");
    for(int student = 0; student < studentCount; student++)
    {
        result = 0;
        for(int class = 0; class < classCount; class++)
            result += SCMatrix[student][class];
        result /= classCount;
        printf("%d. Ogrencinin Ortalamasi: %g\n", student + 1, result);
        studentMeanScore[student] = result;
    }
    
    // 3. Bölüm
    printf("\n");
    for(int student = 1; student < studentCount; student++)
    {
        if(studentMeanScore[lowestNumber] > studentMeanScore[student])
            lowestNumber = student;
        if(studentMeanScore[highestNumber] < studentMeanScore[student])
            highestNumber = student;
    }
    printf("En Yuksek Ortalamali Ogrencinin\nNumarasi: %d\nOrtalamasi: %g\n", highestNumber + 1, studentMeanScore[highestNumber]);
    printf("En Dusuk Ortalamali Ogrencinin\nNumarasi: %d\nOrtalamasi: %g\n", lowestNumber + 1, studentMeanScore[lowestNumber]);

    // 4. Bölüm
    printf("\n");
    for(int class = 0; class < classCount; class++)
    {
        lowestNumber = 0;
        highestNumber = 0;
        for(int student = 0; student < studentCount; student++)
        {
            if(SCMatrix[lowestNumber][class] > SCMatrix[student][class])
                lowestNumber = student;
            if(SCMatrix[highestNumber][class] < SCMatrix[student][class])
                highestNumber = student;
        }

        printf("%d. Dersin En Yuksek ve En Dusuk Not Farki: %g\n", class + 1, SCMatrix[highestNumber][class] - SCMatrix[lowestNumber][class]);
    }

    // 5. Bölüm
    printf("\n");
    for(int class = 0; class < classCount; class++)
    {
        classMeanScore[class] = 0;
        for(int student = 0; student < studentCount; student++)
        {
            classMeanScore[class] += SCMatrix[student][class];
        }
        classMeanScore[class] /= studentCount;
    }

    lowestNumber = 0;
    highestNumber = 0;
    for(int class = 0; class < classCount; class++)
    {
        if(classMeanScore[lowestNumber] > classMeanScore[class])
            lowestNumber = class;
        if(classMeanScore[highestNumber] < classMeanScore[class])
            highestNumber = class;
    }
    printf("En yuksek ortalamali ders ile en dusuk ortalamali ders arasindaki fark: %g", classMeanScore[highestNumber] - classMeanScore[lowestNumber]);

    getch();
}