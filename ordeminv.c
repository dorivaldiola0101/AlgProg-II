#include <stdio.h>
#define MAX 100
int main(){
    // Faço primeiramente a declaração de variaveis e o Vetor A com o tamanho máximo de 100;
    int i, n, A[MAX];
    scanf("%d", &n); // Leitura da quantidade do tamanho do meu vetor;
    for (i = 0; i < n; i++) // Vou passar pelo Vetor lendo os números;
        scanf("%d", &A[i]);
    for (i = n-1; i >= 0; i--) // Leio os valores inseridos de trás pra frente e acabo com o código
        printf("%d ", A[i]);
    printf("\n");
    return 0;
}
