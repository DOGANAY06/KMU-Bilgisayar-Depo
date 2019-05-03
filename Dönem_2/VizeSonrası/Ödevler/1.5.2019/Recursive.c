/*
    İsim: Asrın Doğan 
    Öğrenci No: 181312055
    Tarih: 4/25/2019 22:24
    Ödev Açıklaması: Alınan 10 elemanı sıralayarak yazdıran ya da bu elemanların içinden aratılacak olan değer var ise
    1 yok ise 0 yazdıran program.
*/
#include <stdio.h>
#include <stdlib.h>
#define arraySize 10

void Sort(int *array, int size);
char IsExists(int *array, int size, int item);
void Swap(int *firstValue, int *secondValue);

int main()
{
    int i, selection, item, *array = NULL;

    array = (int *) malloc(sizeof(int) * arraySize);

    if(array == NULL)
    {
        printf("Bellek Hatası");
        return -1;
    }

    for (i = 0; i < arraySize; i++)
    {
        printf("%d. sayiyi giriniz: ", i + 1);
        scanf("%d", array+i);
    }

    printf("\n[1] Siralama\n[2] Arama\nSeciminiz:");
    scanf("%d", &selection);

    // Yukarıda aldığım değeri bool şeklinde kullanabilmek için 1 eksiltip 
    // kullanıyorum ki bana 0 veya 1 değerini versin. 0 = Sıralama, 1 = Arama.
    if(--selection)
    {
        printf("\nAranacak sayiyi giriniz: ");
        scanf("%d", &item);
        printf("Sonuc: %d", IsExists(array, arraySize, item));
    }
    else
    {
        printf("\n-----Siralaniyor-----\n\n");
        Sort(array, arraySize);
        
        for (i = 0; i < arraySize; i++)
            printf("%d\n", *(array+i));
    }
    

    free(array);
    getch();
    return 0;
}

char IsExists(int *array, int size, int item)
{
    int i;
    for (i = 0; i < size; i++)
        if(*(array+i) == item)
            return 1;

    return 0;
}

void Sort(int *array, int size)
{
    int focus, check;

    for (focus = 0; focus < size - 1; focus++)
        for (check = focus + 1; check < size; check++)
            if(*(array + focus) < *(array + check))
                Swap(array + focus, array + check);
}

void Swap(int *firstValue, int *secondValue)
{
    *firstValue     = *firstValue + *secondValue;
    *secondValue    = *firstValue - *secondValue;
    *firstValue     = *firstValue - *secondValue;
}