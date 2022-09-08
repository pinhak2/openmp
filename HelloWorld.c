#include <stdio.h>
int main()
{
#pragma omp parallel
    printf("\nSome dois numeros:  ");
    printf("\nPrimeiro numero: ");
    int x;
    scanf("%d", &x);
    printf("\nSegundo numero: ");
    int y;
    scanf("%d", &y);
    int total = x + y;
    printf("\nA soma de %d e %d: %d!\n", x, y, total);
    return 0;
}
