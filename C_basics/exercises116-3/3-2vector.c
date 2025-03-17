#include <stdio.h>

int pares(int n, int* vet);

int main(){
    int vector[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result = pares(10, vector);
    printf("The amount of even numbers is: %d", result);
    return 0;
}

int pares(int n, int* vet){
    int i, count = 0;
    for(i=0;i<n;i++){
        if(vet[i] % 2 == 0){
            count++;
        }
    }
    return count;
}