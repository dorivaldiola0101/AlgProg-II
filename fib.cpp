// Programa que recebe um inteiro n e calcula os 
// n primeiro termos da Sequência de Fibonacci
// Usando função recursiva

#include <stdio.h>

// Funcao recursiva que recebe um inteiro n>= 1
// devolve o n-esimo termo da sequencia de fibonacci

int fibonacci(int n)
{
    int x;
    // caso(s) base(s):
    if(n == 1){
        return 1;
    }
    else if(n == 2)
    {
        return 1;
    }
    
    x = fibonacci(n-1) + fibonacci(n-2);
    return x;
}

int main(){
    int n;
    scanf("%d", &n);
    //Para cada i(de 1 a n), calcula e imprime o 
    // i-ésimo termo da sequencia de Fibonacci.

    for(int i = 1; i <= n; i++){
        printf("%d", fibonacci(i));
        printf(" ");
    }
    return 0;
    
}
