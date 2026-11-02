/**
 * ============================================================================
 * EXERCICIO 08: Calculo de Fatorial com Laco While Decrescente
 * Livro Base: C Como Programar (Deitel & Deitel, 6a Edicao) - Capitulo 3
 * 
 * Autor: Marcel Florentino "Maçã"
 * GitHub: github.com/applephoria
 * 
 * Conceitos:
 *  - Laco while com decremento de variavel de controle
 *  - Acumulador multiplicativo inicializado em 1
 *  - Limite de representacao de inteiros (overflow) e tipo unsigned long long
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    int n;
    int contador;
    unsigned long long fatorial = 1; // 1 e o elemento neutro da multiplicacao

    printf("============================================================\n");
    printf("        CALCULADORA DE FATORIAL MATEMATICO (N!)             \n");
    printf("============================================================\n");

    printf("Digite um numero inteiro nao-negativo: ");
    scanf("%d", &n);

    // Validacao defensiva
    if (n < 0) {
        printf("\n[ERRO MATEMATICO]: Fatorial nao e definido para numeros negativos!\n");
    } else {
        contador = n;

        // Laco decrescente: multiplica acumulando de n ate 1
        while (contador > 1) {
            fatorial = fatorial * contador;
            contador--; // Operador de decremento pos-fixado
        }

        printf("\n>> Resultado: %d! = %llu\n", n, fatorial);
        printf(">> Calculo concluido com sucesso na CPU.\n");
    }

    printf("============================================================\n");

    return 0;
}

// ============================================================================
// Autor: Marcel Florentino "Maçã"
// GitHub: github.com/applephoria
// ============================================================================