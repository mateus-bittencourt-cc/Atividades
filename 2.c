#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {

    float Pi=3.14, r, area;

    printf("digite o valor do raio:\n");
    scanf("%f", &r);

    area = Pi * pow(r,2);

    printf("area= %.2f", area);
    
    return 0;
}