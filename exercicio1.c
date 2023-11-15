#include <stdio.h>

float validaQuantidade(int qtPecas , int pecas50) {
    float adicional = 0.0;

    if (qtPecas > 50 && qtPecas <= 80) {
        adicional = qtPecas * 0.50;
    } else if (qtPecas > 80) {
        adicional = (qtPecas * 0.75)-20;
    }

    return adicional;
}

void mostraFinal(float salarioBase, float adicional) {
    printf("\nO salario final ficara : %.2f", salarioBase + adicional);
}

int main() {
    float salarioBase = 600, adicional, salarioFinal;
    int qtdPecas,pecas50, saida;

    do {
       

        printf("Digite a quantidade de peças fabricadas: ");
        scanf("%d", &qtPecas);

        adicional = validaQuantidade(qtPecas,pecas50);
        mostraFinal(salarioBase, adicional);

        printf("\nPróximo operário? (Sim - 1 / Não - 2): ");
        scanf("%d", &saida);

    } while (saida != 2);

    return 0;
}
