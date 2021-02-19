Questão 5:

No código da questão 5 temos o seguinte formato de saída dentro do for:
~~~c
printf("\ni = %d - ",i);                //1.
printf("vet[%d] = %.1f; ",i, vet[i]);   //2.
printf(" *(f + %d) = %.1f; ",i, *(f+i));//3.
printf(" &vet[%d] = %X; ",i, &vet[i]);  //4.
printf(" (f + %d) = %X \n",i, f+i);     //5.
~~~
cada linha de print representa:

1. contador de iterações, representado pela variável "i".

2. valor armazenado no local de índice "i" no vetor "vet".

3. valor armazenado na variável "f" pulando "i" posições. Vale salienta que "f" é um ponteiro que aponta para o vetor "vet", ou seja, o valor de "(f+i)" deve sempre coencidir com "vet[i]".

4. endereço de memória de "vet" com índice "i".

5. O endereço de memória da variável "f" pulando "i" posições. Vale salienta que "f" é um ponteiro que aponta para o endereço de "vet", ou seja, o endereço de "(f+i)" deve sempre coencidir com "vet[i]".

---

temos como saída da questão 5:
~~~c
i = 0 - vet[0] = 1.1;  *(f + 0) = 1.1;  &vet[0] = FF61B200;  (f + 0) = FF61B200 

i = 1 - vet[1] = 2.2;  *(f + 1) = 2.2;  &vet[1] = FF61B204;  (f + 1) = FF61B204 

i = 2 - vet[2] = 3.3;  *(f + 2) = 3.3;  &vet[2] = FF61B208;  (f + 2) = FF61B208 

i = 3 - vet[3] = 4.4;  *(f + 3) = 4.4;  &vet[3] = FF61B20C;  (f + 3) = FF61B20C 

i = 4 - vet[4] = 5.5;  *(f + 4) = 5.5;  &vet[4] = FF61B210;  (f + 4) = FF61B210 
~~~

As respostas obtidas são as mesmas das respostas esperadas





