#include <stdio.h>

main()
{
    int first, second;

    printf("Sirasiyle kücük ve büyük bir sayi giriniz\n");
    scanf("%d\n%d", &first, &second);

    for(first; first < second; first++)
        printf("%d\n", first);
}