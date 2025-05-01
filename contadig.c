// Este programa lê dois números inteiros, um indicando a 
// quantidade de números a serem lidos e o outro o valor de 
// um dígito d (0 a 9). O programa lê cada um dos números
// e a cada número lido computa a quantidade de dígitos do 
// número iguais ao dígito d que ocorrem no número.

#include <stdio.h>
int main(){
    int numero, digito, temp, quant;
    scanf("%d", &numero);
    scanf("%d", &digito);
    quant = 0;
    
    
    while(numero > 0){
        temp = numero % 10;
        if(temp == digito){
            quant++;
        }
        numero = numero / 10;
    
    }
    printf("%d", quant);
}