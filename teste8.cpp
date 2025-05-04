#include <stdio.h>
#define MAX 15
#define QDADE 5


struct tconsumo
{
    char eletrodomestico [MAX+1];
    float potencia;
    float dia;  
    float consumo;
    float consumo_relativo;  
};


// Cadastro dos 5 eletrodomesticos;

void cadastrar_eletro(tconsumo eletrodomestico[])
{
    for(int i=0; i< QDADE; i++)
    {   
        scanf(" %[^\n]", eletrodomestico[i].eletrodomestico);
        scanf("%f", &eletrodomestico[i].potencia);
        scanf("%f", &eletrodomestico[i].dia);
    }
}

// Calculo da Potencia em funcao de um tempo T estipulado pelo usuario;

void calcular_potencia(int tempo, tconsumo eletrodomestico[])
{
    float consumo_total = 0;
    for(int i = 0; i < QDADE; i++)
    {
        eletrodomestico[i].consumo = eletrodomestico[i].potencia * eletrodomestico[i].dia * tempo;
        consumo_total += eletrodomestico[i].consumo;
        
    }
    printf("%.2f\n", consumo_total);

    if(consumo_total ==0){
        return;
    }
    
    for(int i = 0; i < QDADE; i++){
        eletrodomestico[i].consumo_relativo = (eletrodomestico[i].consumo / consumo_total) * 100;
        printf("%.2f\n", eletrodomestico[i].consumo_relativo);
    }
}

int main()
{
    tconsumo eletro[QDADE];
    int tempo;
    cadastrar_eletro(eletro);
    scanf("%d", &tempo);
    calcular_potencia(tempo, eletro);


}






