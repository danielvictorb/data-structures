#include <stdio.h>

void show_ascii_table(){
    for (int i = 0; i < 256; i++){
        printf("%d: %c\n", i, (char)i);
    }
}

int main(){
    show_ascii_table();
    return 0;
}