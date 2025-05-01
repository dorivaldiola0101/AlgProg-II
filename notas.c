#include <stdio.h>

int main(){
// LEITURA DAS NOTAS DAS PROVAS E DOS TRABALHOS DOS ALUNOS

    double prova1, prova2, prova3, trabalho1, trabalho2, mediaTrabalhos, mediaFinal,mediaProvas;
    scanf("%lf", &prova1);
    scanf("%lf", &prova2);
    scanf("%lf", &prova3);
    scanf("%lf", &trabalho1);
    scanf("%lf", &trabalho2);

    mediaTrabalhos = (trabalho1 + trabalho2)/2;
    mediaProvas = (prova1 + prova2 + prova3)/3;
    mediaFinal = (mediaProvas * 0.75) + (mediaTrabalhos * 0.25);

    printf("======= NOTAS ========\n");
    printf("Primeira Prova    %4.1f\n", prova1);
   printf("Segunda Prova     %4.1f\n", prova2);
   printf("Terceira Prova    %4.1f\n", prova3);
   printf("Média Provas      %4.1f\n\n", mediaProvas);
   printf("Primeiro Trabalho %4.1f\n", trabalho1);
   printf("Segundo Trabalho  %4.1f\n", trabalho2);
   printf("Média Trabalhos   %4.1f\n", mediaTrabalhos);
   printf("----------------------\n");
   printf("Média Final       %4.1f\n", mediaFinal);
    return 0;
}
