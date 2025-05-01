#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
#define TAM 50
#define CPF 11 // cpf é bom ser do tipo char para evitar erro de alocação em memória



struct tipoPessoa
{   
    char nome[MAX+1];
    double altura;
    double peso;
    char cpf [CPF+1];
    char sexo[TAM];
    double imc;
};

// Criação do menu principal do Exercicio;
int menu()
{
    int option;
    printf("\n------------MENU------------\n");
    printf("[1] - Consultar Pessoas\n");
    printf("[2] - IMC dos individuos masculinos\n");
    printf("[0] - Sair do Menu\n");
    scanf("%d", &option);
    return option;
}



// Criação da função de Cadastrado, tipo void n há retorno
void cadastrar(int n, tipoPessoa vetor[])
{
    for(int i = 0; i < n; i++){
    printf("Informe o nome de cadastro: \n");
    scanf(" %[^\n]", vetor[i].nome);

    printf("Informe a altura da pessoa cadastrada: \n");
    scanf("%lf", &vetor[i].altura);

    printf("Informe o peso da pessoa cadastrada: \n");
    scanf("%lf", &vetor[i].peso);
    printf("Informe o CPF da pessoa cadastrada: \n");
    scanf(" %[^\n]", vetor[i].cpf);

    printf("Informe o sexo da pessoa cadastrada: \n");
    scanf(" %[\n]", vetor[i].sexo);

    vetor[i].imc = vetor[i].peso / (vetor[i].altura * vetor[i].altura);
    }
}

// Criação de Função para buscar o Indice de Massa Corporal;

void buscar(int n, char cpf[CPF+1], tipoPessoa vetor[])
{
    for(int i = 0; i < n; i++){
        if(strcmp(vetor[i].cpf, cpf) == 0)
        {
            printf("Nome: %s | Altura: %lf | Peso: %lf | CPF: %s | Sexo: %s | IMC: %lf\n", vetor[i].nome,
            vetor[i].altura, vetor[i].peso, vetor[i].cpf, vetor[i].sexo, vetor[i].imc);
            return;
        }
    }
    printf("Pessoa com o CPF %s nao encontrado.\n ", cpf);

}

void buscarHomem(int n, tipoPessoa vetor[])
{
    int encontrado = 0;
    for(int i = 0; i < n; i++)
    {
        if(strcmp(vetor[i].sexo, "M") == 0){
            printf("Nome: %s | Altura: %lf | Peso: %lf | Sexo: %s | IMC: %lf\n", vetor[i].nome, vetor[i].altura,
                vetor[i].peso, vetor[i].sexo, vetor[i].imc);
                encontrado = 1;
            }        
            
    }
    if(!encontrado){
        printf("A pessoa encontrada nao e do sexo masculino\n");
    }

}

int main(){
    int option; 
    tipoPessoa vetor[MAX];
    char cpf[CPF+1];
    int n;
    printf("Informe o numero de pessoas que deseja cadastrar: \n");
    scanf("%d", &n);
    cadastrar(n, vetor);
    do
    {
        option = menu();
        if(option == 1)
        {
            printf("Informe o CPF que deseja encontrar: \n");
            scanf(" %[^\n]", cpf);
            buscar(n, cpf, vetor);
        }
        else if(option == 2){
            printf("Toda a listagem de homens: \n");
            buscarHomem(n, vetor);

        }
        
    } while (option!=0);
    return 0;
    


}