#include <stdio.h>

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y){
    if ((x0 <= x && x <= x1) && (y0 <= y && y <= y1)){
        return 1;
    }
    return 0;
}

int main(){
    int result = dentro_ret(0,0,4,4,1,3);
    printf("%d", result);
    return 0;
}