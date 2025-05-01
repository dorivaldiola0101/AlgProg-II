// Exercicio de Struct com objetivo de cadastrar o nome, altura, peso, cpf e sexo de algumas pessoas
// Depois de Cadastrar uma pessoa, devo localizar a pessoa pelo cpf (usuario informa) e calcular seu IMC
// Fórmula do IMC: (PESO / ALTURA²)
// funcçao de maiusculo: strupr(...)
#include <stdio.h>
#include <string.h>
#define MAX 100
#define TAM 50
#define TAM_CPF 11
struct tipoPessoa{
    char nome [MAX+1];
    double altura, peso;
    char cpf[TAM_CPF+1];
    char sexo [TAM+1];
    double imc;
};

// Criação do MENU:
int menu(){
    int option;
    printf("------MENU------\n");
    printf("[1] - Listagem do IMC das pessoas cadastradas: \n");
    printf("[2] - IMC dos individuos masculinos: \n");
    printf("[0] - Pressiona a tecla zero para sair do Menu\n");
    scanf("%d", &option);
    return option;
}


// Criando uma Função para o Cadastro das Pessoas com nome, altura, peso, cpf e sexo; -> adicionei o IMC para facilitar meu lado
void cadastrar(int n, tipoPessoa vetor[]){
    for(int i = 0; i < n; i++){
        printf("Nome da pessoa cadastrada: \n");
        scanf(" %[^\n]", vetor[i].nome);
        printf("Altura da pessoa cadastrada: \n");
        scanf("%lf", &vetor[i].altura);
        printf("Informe o peso da pessoa cadastrada: \n");
        scanf("%lf", &vetor[i].peso);
        printf("Informe o sexo da pessoa cadastrada: \n");
        scanf(" %[^\n]", vetor[i].sexo);
        printf("Informe o cpf da pessoa cadastrada: \n");
        scanf(" %[^\n]", vetor[i].cpf);

        vetor[i].imc = vetor[i].peso / (vetor[i].altura * vetor[i].altura);
    }
}

void buscar(int n, char cadastro_cpf[TAM_CPF+1], tipoPessoa vetor[]){
    for(int i = 0; i < n; i++){
        if(strcmp(vetor[i].cpf , cadastro_cpf) == 0){
            printf("Nome: %s, Altura: %lf, Peso: %lf, Sexo: %s, CPF: %s, IMC: %.2f\n", vetor[i].nome, vetor[i].altura, vetor[i].peso, 
            vetor[i].sexo, vetor[i].cpf, vetor[i].imc);
            return;
        }   
    }
    printf("Pessoa com o CPF %s nao cadastrado. \n", cadastro_cpf);
}
// Criando uma função para a verificação se é homem ou não para que possa ser listado;
void masculino(int n, tipoPessoa vetor[]){
    int homem = 0;
    for(int i = 0; i < n; i++){
        if(strcmp(vetor[i].sexo , "M") == 0){
            printf("Nome do Homem: %s\nIMC: %.2f\n", vetor[i].nome, vetor[i].imc);
            homem = 1;
        }   
    }
    if(!homem){
        printf("A pessoa cadastrada nao e do sexo masculino\n");
    }
}

int main(){
    int n;
    int option;  
    char cadastro_do_cpf[TAM_CPF+1];
    printf("Informe quantas pessoas deseja cadastrar: \n");
    scanf("%d", &n);
    tipoPessoa vetor[MAX];
    cadastrar(n, vetor);
    do
    {
        option = menu();
        if(option == 1){
            printf("Informe o CPF da pessoa para que uma busca seja feita: \n");
            scanf(" %[^\n]", cadastro_do_cpf);
            buscar(n, cadastro_do_cpf, vetor);
        }
        else if(option == 2)
        {
            printf("Homens e seus Indices de Massa Corporal: \n");
            masculino(n, vetor);
        }
        

    }while (option !=0);
    return 0;
}


