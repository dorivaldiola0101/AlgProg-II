#include <stdio.h>

void intercala_rec(int A[], int B[], int C[], int n, int i) {
    if (i == n)
        return;
    C[2 * i] = A[i];
    C[2 * i + 1] = B[i];
    intercala_rec(A, B, C, n, i + 1);
}

int main() {
    int n, i;
    int A[50], B[50], C[100];
    
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &B[i]);
    
    intercala_rec(A, B, C, n, 0);
    
    for (i = 0; i < 2 * n; i++)
        printf("%d ", C[i]);
    printf("\n");
    
    return 0;
}