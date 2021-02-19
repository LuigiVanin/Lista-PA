#include <stdio.h>

void vectorSum(float vet1[], float vet2[], float output[], int len){ //função que executa a soma de vetores
    
    for (int i = 0; i < len; i++){
        output[i] = vet1[i] + vet2[i];
    }
}

void printfArray(float arr[], int size) // função que printa os vetores
{ 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%f ", arr[i]); 
    printf("\n"); 
} 

int main(){


    int length;

    printf("decida o tamanho de ambos os vetores!\n");
    scanf("%d", &length); // tamanho dos vetores 1 e 2 sendo passados pelo usuário

    float vet1[length], vet2[length];
    float output[length];

    printf("escolha os valores para o vetor 1:\n"); //valores do vetor 1 sendo passados pelo usuário
    for (int i = 0; i < length; i++)
    {
        scanf("%f", &vet1[i]);
    }


    printf("escolha os valores para o vetor 2:\n"); //valores do vetor 2 sendo passados pelo usuário
    for (int i = 0; i < length; i++)
    {
        scanf("%f", &vet2[i]);
    }
    

    vectorSum(vet1, vet2, output, length); //soma dos vetores

    printf("Vetor resultado:\n");

    printfArray(output, length);
    
    return 0;
}