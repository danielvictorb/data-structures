#include <stdio.h>
#include <string.h>

int main(){
    FILE *DB, *db1, *db2;
    char nome[30], cpf[20];
    int idade, i;

    DB = fopen("nomes_idades_cpfs.txt", "r");
    db1 = fopen("cp1.txt", "w");
    db2 = fopen("cp2.txt", "w");

    if (DB != 0 && db1 != 0 && db2 != 0){
        for (i=0; i<15;i++){
            fscanf(DB, "%s", nome);
            fscanf(DB, "%d", &idade);
            fscanf(DB, "%s", cpf);
            fprintf(db1, "%s %s", nome, cpf);
            fprintf(db2, "%s %d", nome, idade);

        }
    }
    fclose(DB);
    fclose(db1);
    fclose(db2);

}