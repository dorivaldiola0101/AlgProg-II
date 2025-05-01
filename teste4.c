// #include <stdio.h>
// int main(){
//     int i, menor, maior;
//     float nota[5], soma, media;
//     for (i = 0; i < 5; i++)
//         scanf("%f", &nota[i]);
//     soma = 0.0;
//     for (i = 0; i < 5; i++)
//         soma = soma + nota[i];
//     media = soma / 5;
//     menor = 0;
//     maior = 0;
//     for (i = 0; i < 5; i++) {
//         if (nota[i] < media)
//         menor++;
//         if (nota[i] > media)
//         maior++;
// }
//     printf("\n%2.2f %d %d\n", media, menor, maior);
//     return 0;
// }

#include <stdio.h>
int main()
{
int n;
printf("Digite o tamanho do vetor: ");
scanf("%d", &n);
int v[n];
printf("Digite %d numeros: ", n);
for (int i = 0; i < n; i++)
scanf("%d", &v[i]);
printf("Os %d numeros digitados sao: ", n);
for (int i = 0; i < n; i++)
printf("%d ", v[i]);
printf("\n");
return 0;
}
