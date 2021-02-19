#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct pessoa {
    char nome[20];
    int idade;
};
 
int compararIdade (const void *x, const void *y) {
    int pri = ((struct pessoa *)x)->idade;
    int seg = ((struct pessoa *)y)->idade;
    return (pri - seg);
}
 
int compararNome (const void *a, const void *b) {
    return strcmp (((struct pessoa *)a)->nome,((struct pessoa *)b)->nome);
}
 
int main () {
    int i;
    int idades[]={9,7,8,5,2};
    char nomes[][20] =  {"Joao","Pedro","Ana","Maria","Teste"};
    struct pessoa item[5];

    printf("Pessoas sem ordem:\n");
    for (i = 0; i < 5; i++) {
        strcpy(item[i].nome, nomes[i]);
        item[i].idade = idades[i];
        printf("%s: %d\n", item[i].nome, item[i].idade);
    }

    int (*func_point_age)(const void*,const void*) = &compararIdade;

    qsort(item, 5, sizeof(struct pessoa), func_point_age);

    printf("Pessoas ordenadas por idade:\n");
    for (i = 0; i < 5; i++) {
        printf("%s: %d\n", item[i].nome, item[i].idade);
    }

    int (*func_point_name)(const void*,const void*) = &compararNome; // construindo um pontriro para função

    qsort(item, 5, sizeof(struct pessoa), func_point_name);

    printf("Pessoas ordenadas por nome:\n");
    for (i = 0; i < 5; i++) {
        printf("%s: %d\n", item[i].nome, item[i].idade);
    }

    return(0);
}