#include <stdio.h>
#define MAX 121

int main()
{
    FILE *arqtemp;
    float temperatura[MAX];
    float menor, maior, media,soma = 0.0;
    int dias_abaixo_media = 0 , dias_acima_media = 0;
    // Primeiramente iremos abrir o arquivo temperatura
    arqtemp = fopen("temperatura.txt", "r");
    if(arqtemp == NULL)
    {
        printf("O arquvivo nao pode ser aberto.\n");
    }
    else
    {   
        // Leitura somente da primeira temperatura para seu armazenamento nas variaveis auxiliares;
        fscanf(arqtemp, "%f", &temperatura[0]);
        soma += temperatura[0];
        menor = temperatura[0];
        maior = temperatura[0];
        // Leitura dos Dados do arquivo a partir da segunda temperatura
        for(int i = 1; i < MAX; i++)
        {
            fscanf(arqtemp, "%f", &temperatura[i]);
            soma+=temperatura[i];
           
            

            if(temperatura[i] < menor)
            {
                menor = temperatura[i];
            }
            else if (temperatura[i] > maior)
            {
                maior = temperatura[i];
            }
            
        }
        // Fechamento do Arquivo somente feito após a leitura dos dados;
        fclose(arqtemp);
        media = soma / MAX;

        for(int i = 0; i < MAX; i++)
        {
            if(temperatura[i] < media){
                dias_abaixo_media+=1;
            }
            else if(temperatura[i] > media)
            {
                dias_acima_media+=1;
            }
        }
        printf("Menor temperatura: %.2f C.\n", menor);
        printf("Maior temperatura: %.2f C.\n", maior);
        printf("Media: %.2f C.\n", media);
        printf("Dias abaixo da media: %d dias.\n", dias_abaixo_media);
        printf("Dias acima da media: %d dias.\n", dias_acima_media);
        


    }

}