/**
 * ============================================================================
 * EXERCICIO 01: O Cartao de Visitas e as Sequencias de Escape
 * Livro Base: C Como Programar (Deitel & Deitel, 6a Edicao) - Capitulo 1
 * 
 * Autor: Marcel Florentino "Maçã"
 * GitHub: github.com/applephoria
 * 
 * Conceitos:
 *  - Funcao printf() da biblioteca padrao <stdio.h>
 *  - Sequencias de escape: \n (nova linha), \t (tabulacao horizontal),
 *    \" (aspas literais), \\ (barra invertida literal), \a (alerta sonoro)
 *  - Funcao int main(void) e codigo de saida para o Sistema Operacional
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    // 1. Mensagem de apresentacao com aspas duplas escapadas (\")
    printf("============================================================\n");
    printf("   CARTAO DE VISITAS DO DESENVOLVEDOR - TERMINAL C\n");
    printf("============================================================\n\n");

    printf("Nome do Autor:\tMarcel Florentino \"Maca\"\n");
    printf("Perfil GitHub:\tgithub.com/applephoria\n");
    printf("Profissao:\tEngenheiro de Software & Licenciado em Computacao\n\n");

    // 2. Colunas tabuladas com \t para demonstrar alinhamento estruturado
    printf("HABILIDADES TECNICAS & LINGUAGENS:\n");
    printf("Rank\tLinguagem\tNivel\t\tFoco de Aplicacao\n");
    printf("----\t---------\t-----\t\t-----------------\n");
    printf("01\tC / C++\t\tAvancado\tSistemas & Performance\n");
    printf("02\tC# / .NET\tAvancado\tBack-end & Arquitetura\n");
    printf("03\tTypeScript\tAvancado\tWeb & Interfaces Reativas\n\n");

    // 3. Imprimindo a barra invertida literal (\\) e acionando o alerta (\a)
    printf("Caminho no Sistema de Arquivos: C:\\Users\\applephoria\\Desktop\\C\n");
    printf("Status do Sistema: Operacional [Sinal sonoro disparado]\a\n");
    printf("============================================================\n");

    // Retorna 0 ao Sistema Operacional indicando execucao bem-sucedida
    return 0;
}

// ============================================================================
// Autor: Marcel Florentino "Maçã"
// GitHub: github.com/applephoria
// ============================================================================