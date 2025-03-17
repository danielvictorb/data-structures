#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float* x1, float* x2);

int main(){
    float a = 3, b = -6, c = 0;
    float x1, x2;
    int result = raizes(a, b, c, &x1, &x2);
    printf("%d\n", result);
    printf("values of x1 and x2: %f %f", x1, x2);
    return 0;
}

int raizes(float a, float b, float c, float* x1, float* x2){
    float delta = (b*b) - (4*a*c);
    if (delta > 0){
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2;
    } else if (delta == 0){
        *x1 = (-b) / (2 * a);
        return 1;
    } else {
        return 0;
    } 
}