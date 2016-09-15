#include <stdio.h>

int main() {

    int tempo, velocidadem;
    double litros;
    scanf("%d",&tempo);
    scanf("%d",&velocidadem);
    litros = ((tempo * velocidadem)/12.0);
    printf("%.3lf",litros);
    printf("\n");

    return 0;
}
