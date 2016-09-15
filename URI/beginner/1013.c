#include <stdio.h>
 
int main() {
 
    int a, b, c;
    int maior;
    scanf("%d %d %d", &a, &b, &c);
    maior = (a+b+abs(a-b))/2;
    maior = (maior+c+abs(c-maior))/2;
    printf("%d eh o maior", maior);
    printf("\n");
 
    return 0;
}
