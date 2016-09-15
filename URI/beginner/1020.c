#include <stdio.h>

int main() {

    int N,anos,meses,dias;
    scanf("%d",&N);
    anos = N/365;
    N = N - anos*365;
    meses = N/30;
    dias = N - meses*30;
    printf("%d ano(s)\n",anos);
    printf("%d mes(es)\n",meses);
    printf("%d dia(s)",dias);
    printf("\n");

    return 0;
}
