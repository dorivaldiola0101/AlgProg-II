#include <stdio.h>
#define MAX 30

// Definindo a struct para data
struct Data {
    int dia;
    int mes;
    int ano;
};

// Definindo a struct para produto
struct Produto {
    char nome[MAX+1];
    struct Data vencimento;
};

void leitura(int n, Produto produtos[])
{    // Cadastro
    for (int i = 0; i < n; i++) {

        scanf(" %[^\n]", produtos[i].nome); // Cadastrar nome do produto
        scanf("%d/%d/%d", &produtos[i].vencimento.dia, 
                         &produtos[i].vencimento.mes,
                         &produtos[i].vencimento.ano); // Cadastrar data de vencimento do
    }
}

void listagem(int n, Produto produtos[], Data consulta)
{    
    for (int i = 0; i < n; i++) {

        if (produtos[i].vencimento.ano > consulta.ano ||
            (produtos[i].vencimento.ano == consulta.ano && produtos[i].vencimento.mes > consulta.mes) ||
            (produtos[i].vencimento.ano == consulta.ano && produtos[i].vencimento.mes == consulta.mes && 
                produtos[i].vencimento.dia > consulta.dia)) {

            printf("%s\n", produtos[i].nome);
            printf("%02d/%02d/%04d\n\n", produtos[i].vencimento.dia, produtos[i].vencimento.mes, produtos[i].vencimento.ano);
        }
    }
}



int main() {
    int n;
    Data consulta;

    // leitura de n
    scanf("%d", &n); // Número de itens para cadastrar

    Produto produtos[n];

    // leitura dos produtos
    leitura(n, produtos);

    // data a consultar
    scanf("%d/%d/%d", &consulta.dia, &consulta.mes, &consulta.ano);

    listagem(n, produtos, consulta);    

    return 0;
}