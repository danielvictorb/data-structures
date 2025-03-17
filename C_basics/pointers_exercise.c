#include <stdio.h>

int main (){
    int a = 3;
    int b = 5;
    int *p = &b;
    int **k = &p;
    printf("&p: %d\n", &p);
    printf("b: %d\n", b);
    printf("*k: %d\n", *k);
    printf("&b: %d\n", &b);
    printf("p: %d\n", p);
    printf("*p: %d\n", *p);
    printf("&a: %d\n", &a);
    printf("&k: %d\n", &k);
    printf("(*k)+1: %d\n", (*k)+1);
    printf("**k: %d\n", **k);

    return 0;
}