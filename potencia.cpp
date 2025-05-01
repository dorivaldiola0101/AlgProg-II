#include <stdio.h>
int potencia(int x, int n)
{
    if(n == 0){
        return 1;
    }
    int meio = potencia(x, n / 2);

    if(n % 2 == 0){
        return meio * meio;
    }
    else
        return x * meio * meio;
    
}


int main()
{

    int x, n;
    scanf("%d %d", &x, &n);
    printf("%d", potencia(x,n));

}