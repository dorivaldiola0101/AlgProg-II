#include <stdio.h>
#include <string.h>
#define MAX 30


struct tAluno
{
    int matricula;
    char nome[MAX+1];
    char curso[MAX+1];
};


void cadastrar(int n, tAluno vetor[])
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i].matricula);
        scanf(" %[^\n]", vetor[i].nome);
        scanf(" %[^\n]", vetor[i].curso);

    }
}

void buscar(int n, char busca_curso[MAX+1], tAluno vetor[])
{
    for(int i = 0; i < n; i++)
    { 
        if(strcmp(vetor[i].curso, busca_curso) == 0)
        {
            printf("%d %s\n", vetor[i].matricula, vetor[i].nome);
        }
    }

}

int main()
{
    int n = 5;
    tAluno vetor[MAX];
    char busca_curso[MAX+1];
    cadastrar(n, vetor);
    scanf(" %[^\n]", busca_curso);
    buscar(n, busca_curso, vetor);
}