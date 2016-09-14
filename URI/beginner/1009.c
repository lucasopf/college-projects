#include <stdio.h>

int main() {

    char nome[20];
    double sal, com, total;
    scanf("%s",nome);
    scanf("%lf",&sal);
    scanf("%lf",&com);
    total = sal + ((com*15)/100);
    printf("TOTAL = R$ %.2lf",total);
    printf("\n");

    return 0;
}
