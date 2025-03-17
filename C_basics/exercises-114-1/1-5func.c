#include <stdio.h>

double pi(int n);

int main(){
    double pi_value = pi(10);
    printf("value of pi: %.10f", pi_value);
    return 0;
}

double pi(int n){
    double pi, soma = 0.0;
    int i;
    for(i=0;i<n;i++){
        if (i%2== 0){
            soma += (1.0 / (2 * i+1));
        }else{
            soma += (-1.0 / (2 * i+1));
        }
    }
    pi = 4 * soma;
    return pi;
}