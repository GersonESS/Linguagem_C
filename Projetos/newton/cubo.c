#include <stdio.h>

// Função para calcular o cubo de um número
double cubo(double num) {
    return num * num * num;
}

int main() {
    double numero, resultado;

    // Solicita ao usuário que insira o número
    printf("Digite um número: ");
    scanf("%lf", &numero);

    // Calcula o cubo chamando a função cubo()
    resultado = cubo(numero);

    // Exibe o resultado
    printf("O cubo de %.2lf é %.2lf\n", numero, resultado);

    return 0;
}
