Questão 16.

Para se medir o tempo de execução dos métodos de ordenamentto visualizados na questão 13 e 14, se foi utizado funções de C que lêem a hora do sistema operacoinal no ínicio da execução do programa e no final. Por fim, esse dois valores obtidos são subtraídos para a obtenção do tempo de execução.

A função utilizada foi a "clock()" da biblioteca "time.h" que retorna o tempo atual.
~~~c
int main(){

    double time_spend = 0
    clock_t begin = clock();

    code...

    clock_t end = clock();
    double time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Time elpased is %f seconds\n", time_spent);
    }
~~~

Vale salientar que nos teste comparatívos de tempo de execução para os códigos das questões 13 e 14, **o tempo para a execução do método de qsort(questão 14) foi sempre menor do que a de selection sort(questão 13).**