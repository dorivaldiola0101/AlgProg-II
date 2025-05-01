#include <stdio.h>
#define MAX 100
int main(){
    int i, tamanho, vetor[MAX];
    int crescente = 1;
    //indico o tamanho do vetor;
    scanf("%d", &tamanho); 

    //Leitura dos números do vetor;
    for(i = 0; i < tamanho; i++){ 
        scanf("%d", &vetor[i]);
    }
    // Verificação para saber se o 1° número é maior que o próximo, caso seja eu quebro o laço com um break
    for(i = 0; i < tamanho - 1; i++){
        if(vetor[i] >= vetor[i+1]){
            crescente = 0;  // Aqui crescente é falso, seguimos a lógica booleana de 0 (falso) e 1 (verdade)
            break;
        }
        
    }
    if(crescente){
        printf("verdadeiro\n");
    }
    else{
        printf("falso\n");
    }
}
            

            
        