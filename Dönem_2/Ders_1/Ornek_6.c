#include <stdio.h>

main()
{
    float meter;
    int selection;
    printf("Kac Metre?\n");
    scanf("%f", &meter);

    printf("[1]mm\n[2]cm\n[3]dm\nSeciminiz: ");
    scanf("%d", &selection);

    switch (selection)
    {
        case 1:
            printf("%fm = %fmm", meter, meter * 1000);
            break;
        case 2:
            printf("%fm = %fcm", meter, meter * 100);
            break;
        case 3:
            printf("%fm = %fdm", meter, meter * 10);
            break;
        default:
            printf("Yanlis Secim!");
            break;
    }
}