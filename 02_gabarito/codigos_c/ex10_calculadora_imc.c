/**
 * ============================================================================
 * EXERCICIO 10: Calculadora de Saude & IMC Corporativo da OMS
 * Livro Base: C Como Programar (Deitel & Deitel, 6a Edicao) - Capitulos 2 e 3
 * 
 * Autor: Marcel Florentino "Maçã"
 * GitHub: github.com/applephoria
 * 
 * Conceitos:
 *  - Tipos de ponto flutuante float
 *  - Leitura de float com especificador %f no scanf
 *  - Estrutura de decisao encadeada/aninhada if...else if...else
 *  - Formatacao de saida com %.1f e tabela de classificacao
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    float peso;
    float altura;
    float imc;

    printf("============================================================\n");
    printf("     CALCULADORA DE INDICE DE MASSA CORPORAL (IMC) - OMS    \n");
    printf("============================================================\n");

    printf("Informe seu peso em quilogramas (ex: 78.5): ");
    scanf("%f", &peso);

    printf("Informe sua altura em metros (ex: 1.75): ");
    scanf("%f", &altura);

    // Validacao defensiva
    if (peso <= 0.0f || altura <= 0.0f) {
        printf("\n[ERRO DE DADOS]: Peso e altura devem ser estritamente positivos!\n");
        return 1;
    }

    // Calculo matematico: IMC = peso / (altura * altura)
    imc = peso / (altura * altura);

    printf("\n--- RESULTADO DA AVALIACAO MEDICA ---\n");
    printf("Seu IMC calculado e: %.1f kg/m2\n", imc);
    printf("Diagnostico Clinico: ");

    // Estrutura de selecao encadeada (if...else if...else)
    if (imc < 18.5f) {
        printf("Abaixo do peso normal\n");
    } else if (imc <= 24.9f) {
        printf("Peso normal (Eutrofia)\n");
    } else if (imc <= 29.9f) {
        printf("Sobrepeso (Pre-obesidade)\n");
    } else if (imc <= 34.9f) {
        printf("Obesidade Grau I\n");
    } else if (imc <= 39.9f) {
        printf("Obesidade Grau II (Severa)\n");
    } else {
        printf("Obesidade Grau III (Morbida)\n");
    }

    printf("\n[REFERENCIA DA TABELA OMS]:\n");
    printf("Menor que 18.5:\t\tAbaixo do peso\n");
    printf("Entre 18.5 e 24.9:\tPeso normal\n");
    printf("Entre 25.0 e 29.9:\tSobrepeso\n");
    printf("Entre 30.0 e 34.9:\tObesidade Grau I\n");
    printf("Entre 35.0 e 39.9:\tObesidade Grau II\n");
    printf("Maior ou igual a 40.0:\tObesidade Grau III\n");
    printf("============================================================\n");

    return 0;
}

// ============================================================================
// Autor: Marcel Florentino "Maçã"
// GitHub: github.com/applephoria
// ============================================================================