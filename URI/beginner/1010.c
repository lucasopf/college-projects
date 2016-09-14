#include <stdio.h>

int main() {

    int codigoA,numeroA,codigoB,numeroB;
    double valorA,valorB,valorfinal;
    scanf ("%d%d%lf",&codigoA,&numeroA,&valorA);
    scanf ("%d%d%lf",&codigoB,&numeroB,&valorB);
    valorfinal = (numeroA * valorA) + (numeroB * valorB);
    printf("VALOR A PAGAR: R$ %.2lf",valorfinal);
    printf("\n");

    return 0;
}
