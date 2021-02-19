#include <stdio.h>      
#include <stdlib.h>     

int compare (const void * a, const void * b)    /*função que será passada no qsort, essa função estabelece o método de
                                                comparação da função qsort().
                                                Vale salientar que a função recebe valores do tipo "const void" que sig
                                                nifica receber um tipo genêrico de constante
                                                */
{
    return ( *(int*)a - *(int*)b ); // a função retorna a subtração dos dois parâmetros na forma ponteiro inteiro(int*)
                                    // isso garante que a saida dessa função seja um inteiro.
}

void printfArray(int arr[], int size) // função que printa os vetores
{ 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 

int main ()
{
    int values[] = { 17, 13, 14, 83, 0, 4, 1, 26, 9, 4 }; //iniciando o vetor a ser ordenado pelo qsort()

    int n = sizeof(values) / sizeof(values[0]);
    qsort (values, n, sizeof(int), compare);/*Chamada da função qsort que recebe um vetor de valores a serem ordenados,
                                            o tamanho desse vetor, o tipo dos valores desse vetor e, por fim,
                                            */

    printfArray(values, n);// do array ordendo por meio da função printfArray criada nesse código
  return 0;
  
}