#include <stdio.h>
#include <ctype.h>
#define MAX 100
#define MIN 5

struct tipoFuncionarios
{
    char nome[MAX+1];
    double salarios;
};
// Função para calcular o imposto;

double calcularImposto(double salarios){
    if(salarios <= 850){
        return 0.0;
    }
    else if(salarios > 850 && salarios <= 1200){
        return salarios * 0.10;
    }
    else{
        return salarios * 0.20;
    }
}
void ordenarsalarios(int n, tipoFuncionarios vetor[])
{
    tipoFuncionarios aux;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(vetor[j].salarios > vetor[j+1].salarios){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}
void cadastrar(int n, tipoFuncionarios vetor[]){
    for(int i = 0; i < n; i++){
        printf("Nome da pessoa cadastrada:\n ");
        scanf(" %[^\n]", vetor[i].nome);

        printf("Salario da pessoa cadastrada: \n");
        scanf("%lf", &vetor[i].salarios);
    }
}

void mostrarSalario(int n, tipoFuncionarios vetor[]){
    for(int i = 0; i < n; i++){
        double imposto = calcularImposto(vetor[i].salarios);
        double liquido = vetor[i].salarios - imposto;
        printf("Nome: %s | Imposto: R$ %.2lf | Salario Liquido: %.2lf\n", vetor[i].nome, imposto, liquido);
    }
}
void buscarletra(int n, char letra, tipoFuncionarios vetor[]){
    int encontrado = 0;
    letra = toupper(letra);
    printf("\n--- Funcionarios que começam com '%c' ---\n", letra);

    for(int i = 0; i < n; i++){
        if(toupper(vetor[i].nome[0])== letra){
            printf("Nome: %s | Salario: R$ %.2lf\n", vetor[i].nome, vetor[i].salarios);
            encontrado = 1;
        }
    }
    if(!encontrado){
        printf("Não há funcionario com a letra '%c'.\n", letra);
    }
}
int main(){
    tipoFuncionarios vetor[MIN];
    int n = 5;
    cadastrar(n, vetor);
    ordenarsalarios(n,vetor);
    mostrarSalario(n,vetor);

    char letra;
    printf("Digite uma letra para buscar: \n");
    scanf(" %c", &letra);
    buscarletra(n, letra, vetor);

}
