#include <stdio.h>


int contador = 0;
int piso_log2(int n)
{
    contador++;
    if(n == 1){
        return 0;
    }
    else{
        return piso_log2(n / 2);
    }
    
}
int main()
{

    int n;
    scanf("%d", &n);
    piso_log2(n);
    printf("%d",contador-1);
}