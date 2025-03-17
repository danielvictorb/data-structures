#include <stdio.h>

void fibonacci_sequence(int n) {
    if (n <= 0) return;
    
    int a = 0, b = 1, next;

    if (n >= 1) printf("%d\n", a);
    if (n >= 2) printf("%d\n", b);

    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf("%d\n", next);
        a = b;
        b = next;
    }
}

int main() {
    int number;
    printf("Digite um numero: ");
    scanf("%d", &number);
    fibonacci_sequence(number);

    return 0;
}