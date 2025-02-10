#include <stdio.h>

void deriva(double* poli, int grau, double* out);

int main() {
    double coeficientes[] = {12, 2, 3};  
    int grau = 2;
    double derivada[2];  

    deriva(coeficientes, grau, derivada);

    printf("Coeficientes da derivada:\n");
    for (int i = 0; i < grau; i++) {
        printf("%.2f ", derivada[i]);
    }
    printf("\n");

    return 0;
}

void deriva(double* poli, int grau, double* out) {
    if (grau == 0) {  
        out[0] = 0;
        return;
    }

    for (int i = 0; i < grau; i++) {
        out[i] = poli[i + 1] * (i + 1);  
    }
}
