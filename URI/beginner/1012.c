#include <stdio.h>
#include <math.h>

int main() {

    double pA,pB,pC;
    double tri,cir,tra,qua,ret;
    scanf("%lf %lf %lf",&pA,&pB,&pC);
    tri = (pA * pC)/2;
    cir = 3.14159 * (pow(pC, 2));
    tra = ((pA+pB)*pC)/2;
    qua = (pow(pB, 2));
    ret = pA * pB;
    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cir);
    printf("TRAPEZIO: %.3lf\n",tra);
    printf("QUADRADO: %.3lf\n",qua);
    printf("RETANGULO: %.3lf",ret);
    printf("\n");

    return 0;
}
