#include <stdio.h>
#include <math.h>

int primo(int n) {
    if (n < 2) return 0; // Números menores que 2 não são primos
    if (n == 2) return 1; // 2 é primo
    if (n % 2 == 0) return 0; // Números pares > 2 não são primos

    int i;
    for (i = 3; i <= sqrt(n); i += 2) { // Testa apenas ímpares até sqrt(n)
        if (n % i == 0) return 0;
    }
    
    return 1;
}

int main() {
    int result = primo(97); // Teste com um número primo
    printf("%d\n", result); // Deve imprimir 1
    return 0;
}
