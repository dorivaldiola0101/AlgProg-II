// Utilizar esse exercicio como base de resolução para os próximos exemplos

#include <stdio.h>

#define MAX 100
#define TAM 50

struct tipoAluno{
    char nome [MAX+1];
    int matricula;
    double nota1, nota2;
    double media;
};
void cadastrar(int n, tipoAluno vetor[]){
    for(int i = 0; i < n; i++){
        printf("Informe o nome do Aluno que deseja cadastrar: \n");
        scanf(" %[^\n]", vetor[i].nome);
        printf("Informe o numero da sua matricula: \n");
        scanf("%d", &vetor[i].matricula);
        
        printf("Informe a nota da p1:\n");
        scanf("%lf", &vetor[i].nota1);
        printf("Informe a nota da p2:\n");
        scanf("%lf", &vetor[i].nota2);
    }
}
void media(int n, tipoAluno vetor[]){
    for(int i = 0; i < n; i++){
        vetor[i].media = (vetor[i].nota1 + vetor[i].nota2) / 2;
    }
}

int main(){
    int n = 0;
    printf("Quantos alunos voce deseja cadastrar?\n");
    scanf("%d", &n);
    tipoAluno vetor[MAX];
    cadastrar(n, vetor);
    media(n, vetor);
    for(int i = 0; i < n; i++){
        printf("NOME: %s, MATRICULA: %d, MEDIA: %.2f\n", vetor[i].nome, vetor[i].matricula, vetor[i].media);
    }


}