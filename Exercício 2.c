#include <stdio.h>

// 2.Programa para verificar se o salário é maior que o salário mínimo:

int main() {
    float salario, salario_minimo;

    printf("Digite o salário da pessoa: ");
    scanf("%f", &salario);

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario_minimo);

    if (salario > salario_minimo) {
        printf("A pessoa ganha mais que o salário mínimo.\n");
    } else {
        printf("A pessoa não ganha mais que o salário mínimo.\n");
    }

    return 0;
}