#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void write_names(char *name){
    fgets(name, 20, stdin);
}

void show_names(char **names){
    int i;
    for (i=0;i<10;i++){
        printf("%s", names[i]);
    }
}
int main(){
    int i;
    char **namesArrays = (char**)malloc(10*sizeof(char*));
    if (namesArrays == NULL){
        printf("The memory allocation failed");
        return 1;
    }
    for (i=0;i<10;i++){
        namesArrays[i] = (char*)malloc(20*sizeof(char));
        if (namesArrays[i] == NULL){
            printf("Memory allocation failed");
            for (int j = 0; j <i;j++){
                free(namesArrays[j]);
            }
            free(namesArrays);
            return 1;
        }
        write_names(namesArrays[i]);
    }
    show_names(namesArrays);
    for (i=0;i<10;i++){
        free(namesArrays[i]);
    }
    free(namesArrays);
    return 0;
}