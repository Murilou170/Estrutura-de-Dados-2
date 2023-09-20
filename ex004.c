#include <stdio.h>

int main() {
    int num;
    int quantidade_numeros = 0;

    while (scanf("%d", &num) != EOF) {
        quantidade_numeros++;
    }

    printf("%d\n", quantidade_numeros);

    return 0;
}
