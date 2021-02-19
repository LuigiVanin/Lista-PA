/*
Questão 16 b)- tempo de execução da questão 14. Nessa questão se leva em consideração o tempo de ordenação do vetor
             "vet" utilizando o método de quick sort, por meio da função "qsort()".
*/ 

#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>


int compare (const void * a, const void * b)    /*função que será passada no qsort, essa função estabelece o método de
                                                comparação da função qsort().
                                                */
{
    return ( *(int*)a - *(int*)b ); 
}

void printfArray(int arr[], int size){ // função que printa os vetores
 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 

int main (){
    
    double time_spent = 0.0; //variável que armazena o tempo de execução
 
    clock_t begin = clock();//tempo inicial de execução
 
    int values[] = { 17, 13, 14, 83, 0, 4, 1, 26, 9, 4 }; 

    int n = sizeof(values) / sizeof(values[0]);
    qsort (values, n, sizeof(int), compare);

    printfArray(values, n);

    clock_t end = clock(); // fim da contagem do tempo
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC; // armazenamento do tempo total de execução
 
    printf("Time elpased is %f seconds\n", time_spent);
  return 0;
  
}