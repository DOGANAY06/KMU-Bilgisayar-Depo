#include <stdio.h>
#include <math.h>

main()
{
    float delta, a, b, c;

    printf("Sirasiyla a, b ve c degerlerini giriniz\n");
    scanf("%f\n%f\n%f", &a, &b, &c);

    delta = (b * b) - 4 * a * c;
    printf("Delta = %f\n", delta);

    if(delta < 0)
        printf("Kok yoktur.");
    else if(delta == 0)
    {
        float root;
        root = -b / 2 * a;
        printf("x = %f", root);
    }
    else
    {
        float root1, root2;
        root1 = (-b - sqrt(delta)) / (2 * a);
        root2 = (-b + sqrt(delta)) / (2 * a);
        printf("x1 = %f\nx2 = %f", root1, root2);
    }
    
    getch();
}