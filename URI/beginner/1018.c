#include <stdio.h>

int main() {

    int N,cem,cinquenta,vinte,dez,cinco,dois,um,aux;
    scanf("%d",&N);
    cem = N/100;
    aux = N-cem*100;
    cinquenta = aux/50;
    aux = aux-cinquenta*50;
    vinte = aux/20;
    aux = aux-vinte*20;
    dez = aux/10;
    aux = aux-dez*10;
    cinco = aux/5;
    aux = aux-cinco*5;
    dois = aux/2;
    aux = aux-dois*2;
    um = aux;
    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n",cem);
    printf("%d nota(s) de R$ 50,00\n",cinquenta);
    printf("%d nota(s) de R$ 20,00\n",vinte);
    printf("%d nota(s) de R$ 10,00\n",dez);
    printf("%d nota(s) de R$ 5,00\n",cinco);
    printf("%d nota(s) de R$ 2,00\n",dois);
    printf("%d nota(s) de R$ 1,00",um);
    printf("\n");

    return 0;
}
