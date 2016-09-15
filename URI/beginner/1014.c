#include <stdio.h>

int main() {

    int X;
    double Y, valor;
    scanf("%d",&X);
    scanf("%lf",&Y);
    valor = X/Y;
    printf("%.3lf km/l",valor);
    printf("\n");

    return 0;
}
