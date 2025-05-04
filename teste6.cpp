#include <stdio.h>
#define MAX 20
#define QTDADE 5

// Structs
struct tAluno {
    char nome[MAX + 1];
    float media;
};

struct tSala {
    int codigo;
    struct tAluno tcadatro[QTDADE];
};

// Função do tipo void que modifica vetor[0]
void cadastrar_sala(struct tSala vetor[]) {
    scanf("%d", &vetor[0].codigo);
    for (int i = 0; i < QTDADE; i++) {
        scanf(" %[^\n]", vetor[0].tcadatro[i].nome);
        scanf("%f", &vetor[0].tcadatro[i].media);
    }
}

// Exibição normal
void exibir_sala(struct tSala sala) {
    float soma = 0;
    printf("Sala: %d\n", sala.codigo);

    for (int i = 0; i < QTDADE; i++) {
        printf("%s %.2f\n", sala.tcadatro[i].nome, sala.tcadatro[i].media);
    
        soma += sala.tcadatro[i].media;
    }

    float media_geral = soma / QTDADE;
    printf("Media: %.2f\n", media_geral);
}

// Main com vetor de tamanho 1
int main() {
    struct tSala sala[1];  // Vetor de 1 elemento para simular passagem por referência
    cadastrar_sala(sala);
    exibir_sala(sala[0]);  // Passa a struct como valor
    return 0;
}

