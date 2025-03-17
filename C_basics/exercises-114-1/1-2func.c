#include <stdio.h>

int primo(int n){
    int i, counter = 0;
    for(i=1;i <=n; i++){
        if (n % i == 0){
            counter++;
        }
        if (counter > 2){
            return 0;
        }
    }
    return 1;
}

int main(){
    int result = primo(97);
    printf("%d", result);
    return 0;
}