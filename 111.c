#include <stdio.h>
#include <math.h>

int main (void){
    int dlina;
    float plosh, radius;
    scanf("%d", &dlina);
    radius = dlina / (2 * 3.14);
    plosh = radius * radius * 3.14;
    printf("%lf", (double)plosh);
    return 0;
}