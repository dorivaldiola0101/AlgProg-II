#include <stdio.h>

int conta(int n, int W[], int k) {
    if (n == 0)
        return 0;
    if (W[n - 1] == k)
        return 1 + conta(n - 1, W, k);
    else
        return conta(n - 1, W, k);
}

int main() {
    int N, W[20], k, i;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%d", &W[i]);
    scanf("%d", &k);

    printf("%d\n", conta(N, W, k));
    return 0;
}
