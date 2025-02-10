#include <stdio.h>

int negativos(int n, float* vet);

int main(){
    float vetor[10] = {1, -1, -2, 5, -3, 15, -2, -4, 3, 4};
    int result = negativos(10, vetor);
    printf("the amount of negative numbers is: %d", result);
    return 0;

}

int negativos(int n, float* vet){
    int i, count = 0;
    for(i=0; i< n;i++){
        if(vet[i] < 0){
            count++;
        }
    }
    return count;
}