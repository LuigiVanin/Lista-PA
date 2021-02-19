#include <stdio.h>

// função que constroi a
void setMatrixElements(int matrix[][10], int row, int column) {

    printf("\nEnter elements: \n");

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}


void multiplyMatrices(int first[][10],//função que multiplica matrizes
                      int second[][10],
                      int result[][10],
                      int r1, int e, int c2) {


    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < e; ++j) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < e; ++k) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void printMatrix(int result[][10], int row, int column) {

    printf("\nOutput Matrix:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%d  ", result[i][j]);
            if (j == column - 1)
                printf("\n");
        }
    }
}

int main() {
    int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;
    printf("Coloque as dimensões da primeira matriz(linha e coluna): ");
    scanf("%d %d", &r1, &c1);
    printf("Coloque as dimensões da segunda matriz(linha e coluna):");
    scanf("%d %d", &r2, &c2);

    // número de colunas da primeira matriz deve ser igual ao número de linhas da segunda matriz
    while (c1 != r2) {
        printf("Erro, inisra as colunas novamente(c1 e r2 precisam ser iguais!):.\n");
        printf("Coloque as dimensões da primeira matriz(linha e coluna): ");
        scanf("%d%d", &r1, &c1);
        printf("Coloque as dimensões da segunda matriz(linha e coluna):");
        scanf("%d%d", &r2, &c2);
    }

    int e = c1; /* e será igual ao valor de c1 e r2 que devem ser iguais, pois na multiplicação de matrizes 
                o número de colunas da matriz 1 e o número de linhas da matriz 2 devem ser iguais
                */ 

    //Construindo a primeira matriz
    setMatrixElements(first, r1, e);

    //Construindo a segunda matriz
    setMatrixElements(second, e, c2);
    
    /* 
    Multiplicando as matrizes. Vale salientar que o produto das matrizes deve ser uma matriz com o número de 
    linhas da primeira matriz e o número de colunas da segunda matriz, M(r1, c2)
    */
    multiplyMatrices(first, second, result, r1, e, r2);

    /*Mostrando o resultado.*/ 
    printMatrix(result, r1, c2); /*
                            Lembrando que a matriz resultado deve ser uma matriz com dimensões iguais ao número de linhas
                            da primeia matriz e o número de colunas da segunda matriz
                            */

    return 0;
}