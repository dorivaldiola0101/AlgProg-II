#include <stdio.h>
#include <string.h>
#define MAX 60
#define QTDADE 5

struct tData
{
    int dia, mes, ano;
};



struct tipoAgenda
{
    char compromisso[MAX+1];
    tData data;
};


void compromisso(tipoAgenda agenda[])
{
    for(int i = 0; i < QTDADE; i++)
    {
        scanf(" %[^\n]", agenda[i].compromisso);
        scanf("%d/%d/%d", &agenda[i].data.dia, &agenda[i].data.mes, &agenda[i].data.ano);
    }
}

void listagem(tipoAgenda agenda[], int mes, int ano)
{
    for(int i = 0; i < QTDADE; i ++)
    {
        if(agenda[i].data.mes == mes && agenda[i].data.ano == ano){
            printf(" %s\n", agenda[i].compromisso);

        }
    }
}


int main()
{
    tipoAgenda agenda[QTDADE];
    int M, A;
    compromisso(agenda);
    do
    {
        scanf("%d/%d", &M, &A);
        if(M ==0){
            break;
        }
        listagem(agenda,M,A);
        
    } while (M!=0);
    
    return 0;



}











   
