#include <stdio.h>


int cont = 0;

int ciclos(int n)
{
    printf("%d ", n);
    cont++;
    if(n == 1){
        return 1;
    }
    else if (n % 2 == 0)
    {
        return ciclos(n / 2); 
    }
    else{
        return ciclos((n * 3) + 1 );
    }
    

}
int main()
{
    int n;
    scanf("%d", &n);
    ciclos(n);
    printf("%d\n", cont);
}