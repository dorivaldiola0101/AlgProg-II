#include <stdio.h>

int inteiro (int x){
    if(x == 1)
        return -x;
    else
        return  -5 * inteiro(x-1) + x;

}

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", inteiro(x));
}