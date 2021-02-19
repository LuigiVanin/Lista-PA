Questão 19.

A biblioteca libGC cria um coletor de lixo que pode ser usado na programação em C. O GC de Boehm-Demers-Weiser é um alocador de armazenamento de coleta de lixo que se destina a ser usado como um substituto de plug-in para malloc de C ou new () de C ++. coletor de lixo conservador para C
Para instalar o biblioteca em uma máquina se passa por um processo muito simples, principalmente se a máquina em questão utilizar um SO linux, como é o meu caso.

Para instalar a biblioteca se foi utilizado a seguinte linha de código no terminal debian:

~~~shell
$ sudo apt-get install -y libgc-dev
~~~

Para se rodar o código em C com a biblioteca devidamente importada se usa o seguinte comando de compilação:

~~~shell
$ gcc teste.c -o teste -lgc 
~~~

*OBS.: o acrescimo "lgc" serve para que o compilador leve em consideração a biblioteca libGC no momento de rodar o código.*

Seguindo o passo-a-passo acima se foi possível utilizar e explorar a biblioteca libGC sem mais problemas,