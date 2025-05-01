#include <stdio.h>


// int fat(int n)
// {
//     int result;
//     if(n <= 1){
//         result = 1;
//     }
//     else{
//         result = n * fat(n-1);
//     }
//     return result;
// }

#define MAX 100
int maximo(int n, int v[MAX])
{
    int aux;
    if(n == 1)
        return v[0];
    else
    {
        aux = maximo(n-1, v);
        if(aux > v[n-1])
            return aux;
        else
            return v[n-1];

    }
}

int main()
{
    int vetor[MAX];
    int tamanho;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
    int maior = maximo(tamanho, vetor);
    printf("O maior elemento: %d\n", maior);


}