#include <stdio.h>

int main(){
    char c[4];
    int i[4];
    float f[4];
    double d[4];

    for (int j = 0; j < 4; j++){
        printf("char[%d] = %d - ", j, (c + j)); //a diferença de cada endereço é igual a 1
        printf("int[%d] = %d - ", j, (i + j));//a diferença de cada endereço é igual a 2
        printf("float[%d] = %d - ", j, (f + j));//a diferença de cada endereço é igual a 4
        printf("double[%d] = %d\n", j, (d + j));//a diferença de cada endereço é igual a 8
    }

    return 0;
}