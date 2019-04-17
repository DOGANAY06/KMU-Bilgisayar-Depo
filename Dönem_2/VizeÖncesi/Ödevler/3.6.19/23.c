#include <stdio.h>

main()
{
    float fact = 1, multiply = 1, recursive = 0, n, r;    
    int nominator = 1, denominator = 1;

    do
    {
        printf("n ve r'yi 0'dan buyuk olarak giriniz\n");
        scanf("%f\n%f", &n, &r);
    } while (n <= 0 || r <= 0);
    
    for(int i = 1; i <= n; i++)
        nominator = nominator * i;

    for(int i = 1; i <= r; i++)
        denominator = denominator * i;
    
    for(int i=1;i <= n - r;i++)
        denominator = denominator * i;

    fact = nominator / denominator;

    for(int i = 1; i <= r; i++)
        multiply *= (n - r + i) / i;
    
    nominator = 1;
    denominator = 1;
    for(int i = n - 1; i > n - r; i--)
        nominator = nominator * i;

    for(int i = 1; i <= r - 1; i++)
        denominator = denominator * i;

    recursive += nominator / denominator;
        
    nominator = 1;
    denominator = 1;
    for(int i = n - 1; i >= n - r; i--)
        nominator = nominator * i;

    for(int i = 1; i <= r; i++)
        denominator = denominator * i;

    recursive += nominator / denominator;

    printf("Sonuclar\nFaktoriyel = %g\nCarpim = %g\nYinelemeli = %g", fact, multiply, recursive);

    getch();
}
