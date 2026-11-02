/**
 * ============================================================================
 * EXERCICIO 04: Classificador de Paridade e Analise de Bits
 * Livro Base: C Como Programar (Deitel & Deitel, 6a Edicao) - Capitulo 2
 * 
 * Autor: Marcel Florentino "Maçã"
 * GitHub: github.com/applephoria
 * 
 * Conceitos:
 *  - Operador modulo %
 *  - Estrutura de selecao if...else (ou selecao simples)
 *  - Teoria de computacao: Por que o bit menos significativo (LSB) define paridade
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    int numero;

    printf("============================================================\n");
    printf("        CLASSIFICADOR DE PARIDADE NUMERICA EM C             \n");
    printf("============================================================\n");

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Na matematica discreta e na arquitetura de computadores:
    // Qualquer numero divisivel por 2 sem deixar resto tem resto 0 (PAR).
    // Na base binaria, numeros pares sempre terminam com o bit 0 no LSB (2^0 = 1).
    if (numero % 2 == 0) {
        printf("\nO numero %d e PAR!\n", numero);
        printf("[Explicacao Tecnica]: %d %% 2 == 0. O bit menos significativo (LSB) e 0.\n", numero);
    } else {
        printf("\nO numero %d e IMPAR!\n", numero);
        printf("[Explicacao Tecnica]: %d %% 2 != 0. O bit menos significativo (LSB) e 1.\n", numero);
    }

    printf("============================================================\n");

    return 0;
}

// ============================================================================
// Autor: Marcel Florentino "Maçã"
// GitHub: github.com/applephoria
// ============================================================================