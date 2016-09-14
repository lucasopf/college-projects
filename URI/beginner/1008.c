#include <stdio.h>

int main() {

    int id, hrs;
    double vlrhr, vlrf;
    scanf("%d",&id);
    scanf("%d",&hrs);
    scanf("%lf",&vlrhr);
    vlrf = hrs * vlrhr;
    printf("NUMBER = %d\n",id);
    printf("SALARY = U$ %.2lf",vlrf);
    printf("\n");

    return 0;
}
