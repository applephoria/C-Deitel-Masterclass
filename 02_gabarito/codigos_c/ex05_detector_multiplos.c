/**
 * ============================================================================
 * EXERCICIO 05: Detector de Multiplos com Validacao de Entrada
 * Livro Base: C Como Programar (Deitel & Deitel, 6a Edicao) - Capitulo 2
 * 
 * Autor: Marcel Florentino "Maçã"
 * GitHub: github.com/applephoria
 * 
 * Conceitos:
 *  - Relacao de divisibilidade: A e multiplo de B se A % B == 0
 *  - Prevencao de crash de hardware com divisor nulo
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    int num1, num2;

    printf("============================================================\n");
    printf("         DETECTOR DE MULTIPLOS MATEMATICOS EM C             \n");
    printf("============================================================\n");

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    // Protecao contra divisao por zero
    if (num2 == 0) {
        printf("\n[ALERTA DE SEGURANCA]: Nenhum numero pode ser multiplo de ZERO.\n");
        printf("Divisao por zero e indefinida na algebra e na CPU.\n");
    } else {
        if (num1 % num2 == 0) {
            printf("\n>> Sucesso: O numero %d E MULTIPLO de %d!\n", num1, num2);
            printf(">> Prova: %d = %d * %d (Resto = 0)\n", num1, num2, num1 / num2);
        } else {
            printf("\n>> Resultado: O numero %d NAO e multiplo de %d.\n", num1, num2);
            printf(">> Resto da divisao: %d\n", num1 % num2);
        }
    }

    printf("============================================================\n");

    return 0;
}

// ============================================================================
// Autor: Marcel Florentino "Maçã"
// GitHub: github.com/applephoria
// ============================================================================