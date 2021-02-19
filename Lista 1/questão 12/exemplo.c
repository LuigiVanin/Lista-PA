#include <stdio.h>

void func(int value){
    printf("ola, eu sou uma função e meu parâmetro é %d\n", value);
}

int sum (int a, int b){
    return a + b;
}

int main(){
    //demostração 1  
    void (*pointer_func)(int) = &func;
    (*pointer_func)(78);

    //demostração 2
    int (*pointer_sum)(int, int) = &sum;
    int sum = (*pointer_sum)(2, 9);
    printf("soma via função ponteiro = %d\n", sum);
    return 0;
}