#include <stdio.h>

void calc_esfera(float r, float* area, float* volume);

int main(){
    float r = 2, area, volume;
    calc_esfera(r, &area, &volume);
    printf("Volume: %.2f\n Area: %.2f\n", area, volume);
    return 0;
}

void calc_esfera(float r, float* area, float* volume){
    *area = 4*(r*r);
    *volume = 4*(r*r*r)/3;
}