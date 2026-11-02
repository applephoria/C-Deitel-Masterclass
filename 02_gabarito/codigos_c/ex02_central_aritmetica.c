/**
 * ============================================================================
 * EXERCICIO 02: A Central Aritmetica Corporativa com Protecao Fail-Fast
 * Livro Base: C Como Programar (Deitel & Deitel, 6a Edicao) - Capitulo 2
 * 
 * Autor: Marcel Florentino "Maçã"
 * GitHub: github.com/applephoria
 * 
 * Conceitos:
 *  - Leitura de dados pelo teclado com scanf() e operador endereco-de (&)
 *  - Operadores aritmeticos binarios: +, -, *, /, %
 *  - Truncamento da divisao inteira
 *  - Verificacao defensiva de divisao por zero (Fail-Fast)
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    // Declaracao de variaveis inteiras na Stack
    int num1;
    int num2;
    int soma;
    int diferenca;
    int produto;
    int quociente;
    int resto;

    printf("============================================================\n");
    printf("           CENTRAL ARITMETICA CORPORATIVA EM C              \n");
    printf("============================================================\n");

    // Entrada de dados
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("\n--- RESULTADOS ARITMETICOS ---\n");

    // Operacoes fundamentais
    soma = num1 + num2;
    diferenca = num1 - num2;
    produto = num1 * num2;

    printf("1. Adicao:        %d + %d = %d\n", num1, num2, soma);
    printf("2. Subtracao:     %d - %d = %d\n", num1, num2, diferenca);
    printf("3. Multiplicacao: %d * %d = %d\n", num1, num2, produto);

    // Protecao Fail-Fast para operacoes divisionais
    if (num2 != 0) {
        quociente = num1 / num2; // Divisao inteira (descarta casas decimais)
        resto = num1 % num2;     // Resto euclidiano da divisao inteira

        printf("4. Quociente Int: %d / %d = %d\n", num1, num2, quociente);
        printf("5. Modulo (%%):    %d %% %d = %d\n", num1, num2, resto);
    } else {
        printf("4. Quociente Int: [ERRO CRITICO] Impossivel dividir por ZERO!\n");
        printf("5. Modulo (%%):    [ERRO CRITICO] Modulo por ZERO indefinido!\n");
    }

    printf("============================================================\n");

    return 0;
}

// ============================================================================
// Autor: Marcel Florentino "Maçã"
// GitHub: github.com/applephoria
// ============================================================================