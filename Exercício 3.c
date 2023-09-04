#include <stdio.h>

// 3. Programa para verificar se a altura é maior que 1.8m:


int main() {
    float altura;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    if (altura > 1.8) {
        printf("A pessoa possui altura maior que 1.8m.\n");
    } else {
        printf("A pessoa possui altura menor ou igual a 1.8m.\n");
    }

    return 0;
}