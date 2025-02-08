#include <stdio.h>

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y){
    if (x0 > x1){
        int temp = x0;
        x0 = x1;
        x1 = temp;
    }

    if (y0 > y1){
        int temp = y0;
        y0 = y1;
        y1 = temp;
    }

    return (x0 <= x && x <= x1) && (y0 <= y && y <= y1);
}

int main(){
    int result = dentro_ret(0, 4, 4, 0, 1, 3); 
    printf("%d\n", result); 
    return 0;
}
