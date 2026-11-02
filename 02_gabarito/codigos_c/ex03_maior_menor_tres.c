/**
 * ============================================================================
 * EXERCICIO 03: Inspetor Relacional de Tres Inteiros
 * Livro Base: C Como Programar (Deitel & Deitel, 6a Edicao) - Capitulo 2
 * 
 * Autor: Marcel Florentino "Maçã"
 * GitHub: github.com/applephoria
 * 
 * Conceitos:
 *  - Operadores relacionais e de igualdade (==, !=, <, >, <=, >=)
 *  - Estrutura de selecao simples if
 *  - Padrao de comparacao progressiva para determinar maior e menor
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    int a, b, c;
    int maior, menor;

    printf("============================================================\n");
    printf("        INSPETOR RELACIONAL DE TRES INTEIROS                \n");
    printf("============================================================\n");

    printf("Digite tres numeros inteiros separados por espaco: ");
    scanf("%d %d %d", &a, &b, &c);

    // Assume inicialmente que o primeiro elemento e tanto o maior quanto o menor
    maior = a;
    menor = a;

    // Testes sucessivos com selecao simples (if)
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }

    printf("\n--- RELATORIO DE ANALISE RELACIONAL ---\n");
    printf("Valores inseridos: [%d, %d, %d]\n", a, b, c);
    printf("O MAIOR valor e:   %d\n", maior);
    printf("O MENOR valor e:   %d\n", menor);

    // Verificacao de igualdade total
    if (a == b && b == c) {
        printf("Observacao: Todos os tres numeros sao estritamente IGUAIS!\n");
    }

    printf("============================================================\n");

    return 0;
}

// ============================================================================
// Autor: Marcel Florentino "Maçã"
// GitHub: github.com/applephoria
// ============================================================================