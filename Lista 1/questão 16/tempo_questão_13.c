/*
Questão 16 a)- tempo de execução da questão 13. Nessa questão se leva em consideração o tempo de ordenação do vetor
             "vet" utilizando o método de selection sort.
*/ 

#include <stdio.h> 
#include <stdlib.h>
#include <time.h> // importação da ferramentas que monitoram o tempo da máquina




void swap(int* xp, int* yp){ // função que elabora a troca de valores, as variáveis são passadas em referência
 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void selectionSort(int arr[], int n){ //função que ordena de forma ascendente(selection sort) 
 
    int i, j, min_idx; 
  
    for (i = 0; i < n - 1; i++){ 
  
        min_idx = i; 
        for (j = i + 1; j < n; j++) 
            if (arr[j] < arr[min_idx]) 
                min_idx = j; 
  
        swap(&arr[min_idx], &arr[i]); 
    } 
}

void printfArray(int arr[], int size){ // função que printa os vetores
 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
int main(){ 

    double time_spent = 0.0; //variável que armazena o tempo de execução
    clock_t begin = clock(); // tempo inicial de execução

    int vet[] = { 17, 13, 14, 83, 0, 4, 1, 26, 9, 4}; 
    int n = sizeof(vet) / sizeof(vet[0]); 
    printf("Vetor original: \n"); 

    printfArray(vet, n);


    selectionSort(vet, n); // ordenado o vetor
    printf("\nVetor ordenado em ordem crescente: \n"); 
 
    printfArray(vet, n);
    

    clock_t end = clock(); // fim da contagem do tempo
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC; // armazenamento do tempo total de execução
 
    printf("Time elpased is %f seconds\n", time_spent);
  
    return 0; 
} 