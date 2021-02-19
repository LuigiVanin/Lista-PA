#include <stdio.h> 
  
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
            if (arr[j] < arr[min_idx]) //busca por um elemento menor
                min_idx = j; 
  
        swap(&arr[min_idx], &arr[i]); // troca das posições do vetor
    } 
}

void printfArray(int arr[], int size){ // função que printa os vetores
 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
int main(){ 

    int vet[] = { 17, 13, 14, 83, 0, 4, 1, 26, 9, 4}; 
    int n = sizeof(vet) / sizeof(vet[0]); 
    printf("Vetor original: \n"); 

    printfArray(vet, n);// printando o vetor original


    selectionSort(vet, n); // ordenado o vetor
    printf("\nVetor ordenado em ordem crescente: \n"); 
 
    printfArray(vet, n);// printando o vetor ordenado
  
    return 0; 
} 