#include <stdio.h>

int main() {

    int n;
    int resultado = 0;
    int num;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &num);
        resultado += num;
    }

    printf("%d", resultado);

    return 0;
}