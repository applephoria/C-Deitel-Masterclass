/**
 * ============================================================================
 * EXERCICIO 07: Sistema de Media da Turma com Valor Sentinela e Cast Explicito
 * Livro Base: C Como Programar (Deitel & Deitel, 6a Edicao) - Capitulo 3
 * 
 * Autor: Marcel Florentino "Maçã"
 * GitHub: github.com/applephoria
 * 
 * Conceitos:
 *  - Repeticao indefinida controlada por valor sentinela (-1)
 *  - Variaveis acumuladoras (total) e contadoras (contadorAlunos)
 *  - Casting unario (float) para evitar o truncamento da divisao inteira
 *  - Formatacao de casas decimais com %.2f
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    int total = 0;           // Acumulador de notas
    int contadorAlunos = 0;  // Contador de alunos processados
    int nota;                // Variavel temporaria de leitura
    float media;             // Media em ponto flutuante

    printf("============================================================\n");
    printf("   SISTEMA DE MEDIA ESCOLAR - CONTROLE POR SENTINELA        \n");
    printf("============================================================\n");
    printf("Digite as notas inteiras (0 a 100).\n");
    printf("Para encerrar e calcular a media, digite o sentinela: -1\n\n");

    // Leitura da primeira nota (Leitura de inicializacao / priming read)
    printf("Digite a nota (-1 para sair): ");
    scanf("%d", &nota);

    // Laco de repeticao continua enquanto o sentinela nao for digitado
    while (nota != -1) {
        // Valida se a nota esta no intervalo pedagogico legal
        if (nota >= 0 && nota <= 100) {
            total = total + nota;
            contadorAlunos++;
        } else {
            printf("[AVISO]: Nota %d invalida! Apenas notas de 0 a 100 sao aceitas.\n", nota);
        }

        // Le a proxima nota
        printf("Digite a nota (-1 para sair): ");
        scanf("%d", &nota);
    }

    printf("\n==================== RESUMO FINAL ==========================\n");

    // Fase de terminacao: se ao menos um aluno teve nota computada
    if (contadorAlunos != 0) {
        // Cast explicito (float) total: converte temporariamente o total para float,
        // forcando a CPU a realizar divisao de ponto flutuante de alta precisao.
        media = (float) total / contadorAlunos;

        printf("Total de notas validas inseridas: %d\n", contadorAlunos);
        printf("Somatorio das notas:              %d\n", total);
        printf("Media aritmetica da turma:        %.2f\n", media);
    } else {
        printf("Nenhuma nota valida foi informada pelo usuario.\n");
    }

    printf("============================================================\n");

    return 0;
}

// ============================================================================
// Autor: Marcel Florentino "Maçã"
// GitHub: github.com/applephoria
// ============================================================================