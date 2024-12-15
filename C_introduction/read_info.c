#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_names(int n) {
    char first_name[20];
    int age;
    FILE *arq;
    arq = fopen("survey.txt", "a");
    if (arq == NULL) {
        printf("Error opening file\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("Write your first_name: ");
        fgets(first_name, sizeof(first_name), stdin);
        first_name[strcspn(first_name, "\n")] = '\0';
        fprintf(arq, "%s ", first_name);
        printf("Write your age: ");
        scanf("%d", &age);
        fprintf(arq, "%d\n", age);
        getchar();

        printf("Numbers of people to go: %d\n", n - (i + 1));
    }
    fclose(arq);
}

int main() {
    int n;
    printf("Type the number of people in the survey: ");
    scanf("%d", &n);
    getchar();
    read_names(n);
    return 0;
}
