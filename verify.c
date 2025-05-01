#include <stdio.h>
#define MAX 100
int main(){
    // declarando as variáveis do exercício
    int tamanho, vetor[MAX];
    int maior = 1;

    // Indico o tamanho do Vetor;
    scanf("%d", &tamanho);

    // Realizo a Leitura dos Dados do meu Vetor dentro de um laço;
    for(int i = 0; i < tamanho; i ++){
        scanf("%d", &vetor[i]);
    }
    // Criando um laço for de repetição com uma verificação se o primeiro numero é o maior de uma lista, não sendo eu já quebro
    // o meu laço (condição forte de parada de laço);
    // Obs: sempre lembrar que eu devo comparar somente até a penúltima posição, n é necessário acessar a última, pois causaria
    // uma comparação errada e eu acessaria lixo de memoria no meu vetor;
    for(int i = 0; i < tamanho - 1; i++){
        if(vetor[0] <= vetor[i + 1]){
            maior = 0;
            break;
        }
    }
    if(maior){
        printf("true\n");
    }
    else{
        printf("false\n");
    }


}