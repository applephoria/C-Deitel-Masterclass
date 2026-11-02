/**
 * ============================================================================
 * EXERCICIO 06: Tabela Alinhada de Quadrados e Cubos (0 a 10)
 * Livro Base: C Como Programar (Deitel & Deitel, 6a Edicao) - Capitulos 2 e 3
 * 
 * Autor: Marcel Florentino "Maçã"
 * GitHub: github.com/applephoria
 * 
 * Conceitos:
 *  - Formatacao de saida de dados em colunas
 *  - Tabulacao com \t e especificadores de formato alinhados
 *  - Estrutura de repeticao controlada por contador
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    int i = 0; // Variavel de controle do laco (contador)

    printf("============================================================\n");
    printf("        TABELA TABULAR DE POTENCIAS: QUADRADOS E CUBOS      \n");
    printf("============================================================\n");

    // Cabecalho tabulado
    printf("Numero\t\tQuadrado\tCubo\n");
    printf("------\t\t--------\t----\n");

    // Laco de repeticao controlada por contador de 0 ate 10
    while (i <= 10) {
        int quadrado = i * i;
        int cubo = i * i * i;

        printf("%d\t\t%d\t\t%d\n", i, quadrado, cubo);

        i++; // Incremento da variavel de controle
    }

    printf("============================================================\n");

    return 0;
}

// ============================================================================
// Autor: Marcel Florentino "Maçã"
// GitHub: github.com/applephoria
// ============================================================================