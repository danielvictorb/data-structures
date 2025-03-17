#include <stdio.h>

double avalia(double* poli, int grau, double x);

int main() {
    double coeficientes[] = {12, 2, 3};  
    int grau = 2;
    double x = 2.0;

    double resultado = avalia(coeficientes, grau, x);
    printf("O valor do polinomio em x = %.2f eh %.2f\n", x, resultado);

    return 0;
}

double avalia(double* poli, int grau, double x) {
    double resultado = poli[grau];  
    for (int i = grau - 1; i >= 0; i--) {
        resultado = resultado * x + poli[i];
    }
    return resultado;
}
