#include <stdio.h>
#include <math.h>

int main() {

    double area,raio;
    scanf("%lf",&raio);
    area = 3.14159 * pow(raio, 2);
    printf("A=%.4lf",area);
    printf("\n");

    return 0;
}
