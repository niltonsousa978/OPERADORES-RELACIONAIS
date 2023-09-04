#include <stdio.h>

// 4. Programa para verificar se o peso é menor que 60kg:


int main() {
    float peso;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    if (peso < 60) {
        printf("A pessoa possui peso menor que 60kg.\n");
    } else {
        printf("A pessoa possui peso maior ou igual a 60kg.\n");
    }

    return 0;
}