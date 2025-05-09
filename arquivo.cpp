#include <stdio.h>
#define MAX 30


int main()
{

    FILE *arqnotas;
    char nome_arquivo[MAX];
    char nome_alunos[MAX];
    float nota1, nota2, media;
    int n;  // Indica qntd de alunos que serão lidos nos arquivos;
    

    

    printf("Nome do Arquivo: ");
    scanf(" %s", nome_arquivo);


    printf("Informe a quantidade alunos da sala: ");
    scanf("%d", &n);
    // Abertura do Arquivo:
    arqnotas = fopen(nome_arquivo, "w");
    if(arqnotas == NULL)
    {
        printf("Erro na abertura do arquivo\n");
    }
    else
    {
        // Leitura dos Dados de 10 alunos (n = 10) --> Nome, nota1, nota2, media;
        for(int i = 0; i < n; i++)
        {
            printf("Informe o nome do aluno: ");
            scanf(" %s", nome_alunos);
            printf("Informe a 1° nota do aluno: ");
            scanf("%f", &nota1);
            printf("Informe a 2° nota do aluno: ");
            scanf("%f", &nota2);    
            media = (nota1 + nota2) / 2.0;

            fprintf(arqnotas, "Nome: %s | Nota1: %.2f | Nota2: %.2f | Media: %.2f\n", nome_alunos, nota1, nota2, media);
        }
        fclose(arqnotas);
        printf("\nDados gravados com sucesso no arquivo '%s'.\n", nome_arquivo);
    }
    return 0;
}   




