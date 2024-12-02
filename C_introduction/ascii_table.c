#include <stdio.h>

void show_ascii_table(){
    for (int i = 32; i < 126; i++){
        printf("%d: %c\n", i, (char)i);
    }
}

int main(){
    show_ascii_table();
    return 0;
}