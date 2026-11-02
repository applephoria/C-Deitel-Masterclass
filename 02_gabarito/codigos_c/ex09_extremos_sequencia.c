/**
 * ============================================================================
 * EXERCICIO 09: Rastreador de Extremos em Sequencia Dinamica (Sem Arrays)
 * Livro Base: C Como Programar (Deitel & Deitel, 6a Edicao) - Capitulo 3
 * 
 * Autor: Marcel Florentino "Maçã"
 * GitHub: github.com/applephoria
 * 
 * Conceitos:
 *  - Processamento em streaming com complexidade espacial O(1)
 *  - Laco while controlado por contador
 *  - Atualizacao dinÃ¢mica de variaveis de estado (maior e menor)
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    int totalNumeros;
    int contador = 1;
    int valorAtual;
    int maior;
    int menor;

    printf("============================================================\n");
    printf("        RASTREADOR DE EXTREMOS (MAIOR E MENOR) EM TEMPO REAL \n");
    printf("============================================================\n");

    printf("Quantos numeros inteiros voce deseja analisar? ");
    scanf("%d", &totalNumeros);

    if (totalNumeros <= 0) {
        printf("\n[AVISO]: Quantidade invalida. O numero de elementos deve ser >= 1.\n");
        return 1; // Termina o programa com codigo de erro
    }

    // Leitura do primeiro valor para calibrar o ponto de partida de maior e menor
    printf("Digite o numero 1: ");
    scanf("%d", &valorAtual);

    maior = valorAtual;
    menor = valorAtual;

    // Laco de repeticao para ler os numeros restantes
    while (contador < totalNumeros) {
        contador++;

        printf("Digite o numero %d: ", contador);
        scanf("%d", &valorAtual);

        // Atualizacao condicional de extremos
        if (valorAtual > maior) {
            maior = valorAtual;
        }

        if (valorAtual < menor) {
            menor = valorAtual;
        }
    }

    printf("\n--- RELATORIO DE EXTREMOS COMPUTADOS ---\n");
    printf("Total de numeros processados na RAM: %d\n", totalNumeros);
    printf("O MAIOR numero encontrado:           %d\n", maior);
    printf("O MENOR numero encontrado:           %d\n", menor);
    printf("============================================================\n");

    return 0;
}

// ============================================================================
// Autor: Marcel Florentino "Maçã"
// GitHub: github.com/applephoria
// ============================================================================