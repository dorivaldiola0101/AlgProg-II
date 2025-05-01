#include <stdio.h>
#include <string.h>

// Função recursiva para verificar se é palíndromo
bool palindromo(char palavra[], int inicio, int fim) {
    if (inicio >= fim)
        return true;
    if (palavra[inicio] != palavra[fim])
        return false;
    return palindromo(palavra, inicio + 1, fim - 1);
}

int main() {
    char palavra[101];
    scanf("%s", palavra);
    int len = strlen(palavra);

    if (palindromo(palavra, 0, len - 1))
        printf("É um palíndromo.\n");
    else
        printf("Não é um palíndromo.\n");

    return 0;
}