// Projete e implemente um programa em C/C++ que leia dois números inteiros, 
// inicio e fim e calcule a soma dos números inteiros ímpares maiores ou iguais
// a inicio e menores ou iguais a fim.

#include <stdio.h>

int main(){

    // Declaração das Variáveis;
    int inicio, fim, soma;

    // Leitura dos Dados do Teclado;
    scanf("%d", &inicio);
    scanf("%d", &fim);
    // Inicialização da soma em 0 para que ela possa ser atualizada;
    soma = 0;

    for(int i =inicio; i<=fim; i+=2){
        if(i % 2 == 0){
            i++;
            soma += i;   
        }
        else
        soma = soma + i;
    }
    printf("%d\n",soma);

}