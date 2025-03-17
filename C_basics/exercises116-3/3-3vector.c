#include <stdio.h>

void inverte(int n, int* vet);

int main(){
    int i;
    int vector[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    inverte(10, vector);
    printf("The inverted vector is:\n");
    for(i=0;i<10;i++){
        printf("%d ", vector[i]);
    }
    return 0;
}

void inverte(int n, int* vet){
    int i, j = n-1, temp;
    for(i=0; i<n/2;i++){
        temp = vet[i];
        vet[i] = vet[j];
        vet[j] = temp;
        j--;
    }
}