# 📚 Caderno Teórico de Linguagem C
> **Baseado nos Capítulos 1, 2 e 3 do clássico *"C Como Programar"* (Paul & Harvey Deitel, 6ª Edição)**  
> **Curadoria Pedagógica: Prof. Marcel Florentino "Maçã" • [github.com/applephoria](https://github.com/applephoria)**

---

> 🏷️ **Marca D'água & Tag Oficial de Autoria:** `github.com/applephoria`

---

> 💡 **Nota do Professor:**  
> A teoria da computação e a arquitetura de sistemas não são abstrações mortas para decorar — elas são a **física** do software. Ao responder a estas 10 perguntas, não busque apenas o "o quê", mas investigue o **"porquê"** e o que acontece fisicamente na CPU, nos barramentos e na memória RAM.

---

### 🧠 Questão 01: O Ciclo de Transformação do Código Fonte ao Executável (Cap. 1)
No Capítulo 1, Deitel descreve as seis fases pelas quais todo programa em C passa antes de sua primeira instrução ser processada pela CPU: **Edição**, **Pré-processamento**, **Compilação**, **Montagem (Assembly)**, **Linkedição (Ligação)** e **Carregamento (Loading)**.
* **Pergunta:** Explique detalhadamente o papel do **Pré-processador** quando ele encontra a diretiva `#include <stdio.h>` e por que o código-fonte gerado após essa fase é substancialmente maior. O que acontece na fase de **Linkedição** caso o seu programa chame a função `printf()`, mas a biblioteca padrão de C (`libc`) não seja ligada ao binário?

---

### 🧠 Questão 02: A Anatomia de `int main(void)` e o Diálogo com o SO (Cap. 1 e 2)
A assinatura canônica de entrada em C é `int main(void)`.
* **Pergunta:** Por que a função `main` retorna obrigatoriamente um valor inteiro (`int`) e o que o comando `return 0;` comunica especificamente ao Sistema Operacional (Windows, Linux, macOS)? Como um script em PowerShell ou Bash pode ler esse retorno para tomar decisões de resiliência corporativa?

---

### 🧠 Questão 03: A Física da Memória RAM e o Mistério do `&` no `scanf` (Cap. 2)
Observe as duas instruções clássicas:
```c
printf("%d\n", total);
scanf("%d", &total);
```
* **Pergunta:** Por que passamos a variável `total` diretamente para o `printf`, mas somos terminantemente obrigados a passar `&total` para o `scanf`? Explique a diferença física entre **Passagem por Valor** e o **Operador Endereço-de (`&`)**, detalhando o que a CPU faria na memória caso o programador esquecesse o símbolo `&`.

---

### 🧠 Questão 04: Divisão Inteira, Truncamento e a Mágica do Casting Unário (Cap. 2 e 3)
Considere o seguinte trecho de código:
```c
int totalPontos = 7;
int totalAlunos = 2;
float media = totalPontos / totalAlunos;
```
* **Pergunta:** Por que o valor armazenado na variável `media` será `3.000000` e não `3.500000`, mesmo que a variável receptora seja do tipo `float`? O que é o fenômeno do **truncamento**? Como o operador de conversão unária de tipo (*cast* explícito) `(float)totalPontos / totalAlunos` altera a operação nos registradores da ALU (Unidade Lógica e Aritmética) da CPU?

---

### 🧠 Questão 05: Precedência, Associatividade e a Ordem dos Fatos (Cap. 2)
Dada a expressão matemática em C:
```c
resultado = a * b % c + d / e - f;
```
* **Pergunta:** Com base nas regras de precedência e associatividade de operadores da linguagem C (Tabela 2.13 do Deitel):
  1. Qual é a ordem exata de resolução de cada operador?
  2. Todos os operadores de mesma prioridade são avaliados da esquerda para a direita ou da direita para a esquerda?
  3. Qual a recomendação de Clean Code do Deitel para evitar ambiguidades e bugs silenciosos em equipes corporativas?

---

### 🧠 Questão 06: O Operador Módulo (`%`) e as Leis Físicas do Ponto Flutuante (Cap. 2)
O operador módulo `%` é amplamente utilizado para verificar paridade, múltiplos e manipular ciclos cíclicos de índices.
* **Pergunta:** O que aconteceria se você tentasse compilar a instrução `float resto = 7.5 % 2.1;` no GCC? Por que a especificação da linguagem C proíbe o operador `%` com tipos de ponto flutuante (`float`/`double`) e qual função da biblioteca `<math.h>` deve ser convocada caso precisemos calcular o resto de números reais?

---

### 🧠 Questão 07: O Erro Silencioso do Ponto e Vírgula Indesejado (Cap. 2 e 3)
Analise o trecho escrito por um desenvolvedor júnior:
```c
int nota = 45;

if (nota >= 60);
{
    printf("Parabens! Voce foi aprovado!\n");
}
```
* **Pergunta:** Esse código compila sem erros? Qual mensagem será impressa no terminal quando a variável `nota` for igual a `45`? Explique o conceito de **Instrução Nula** (*Null Statement*) em C e a armadilha arquitetural que o ponto e vírgula após a condição do `if` cria nos blocos de execução.

---

### 🧠 Questão 08: Repetição Definida vs Indefinida (Contador vs Sentinela) (Cap. 3)
No Capítulo 3, Deitel divide a repetição estruturada em duas grandes categorias: **controlada por contador** e **controlada por valor sentinela** (ou sinalizadora/bandeira).
* **Pergunta:**
  1. Quais são os três elementos mecânicos obrigatórios para que uma repetição controlada por contador não entre em loop infinito?
  2. O que caracteriza um **valor sentinela** e que cuidado extremo o engenheiro deve ter ao escolher o valor desse sentinela (por exemplo, ao ler salários de funcionários ou notas de provas)?

---

### 🧠 Questão 09: A Batalha dos Incrementos: Pré-fixado (`++x`) vs Pós-fixado (`x++`) (Cap. 3)
Suponha que no início da execução temos `int x = 5;`.
Considere os dois cenários isolados:
* **Cenário A:** `int resultadoA = ++x;`
* **Cenário B:** `int resultadoB = x++;`
* **Pergunta:** Quais serão os valores finais de `x`, `resultadoA` e `resultadoB` em cada cenário? Explique a mecânica de registradores: quem incrementa antes de entregar o valor para a expressão e quem entrega o valor original para só depois sofrer o efeito colateral (*side effect*)?

---

### 🧠 Questão 10: O Teorema da Estrutura de Böhm-Jacopini e o Banimento do `goto` (Cap. 3)
Na década de 1960, Corrado Böhm e Giuseppe Jacopini provaram matematicamente que qualquer algoritmo computável pode ser escrito utilizando apenas três estruturas fundamentais: **Sequência**, **Seleção** e **Repetição**. Essa tese culminou no famoso artigo de Edsger W. Dijkstra: *"Go To Statement Considered Harmful"*.
* **Pergunta:** Por que Deitel e os pioneiros da ciência da computação condenam o uso do comando `goto` em C? O que significa na prática o conceito de código espaguete (*spaghetti code*) e como a Programação Estruturada garante a rastreabilidade e a manutenção de sistemas críticos que operam em escala global?

---

<div align="center">

> *"Existem apenas 10 tipos de pessoas no mundo: as que entendem código binário e as que não entendem. E quem programa em C entende até os elétrons!"*  
> — **Estatuto dos Programadores C Raiz** 🍏⚡

**Marcel Florentino "Maçã"** | Perfil Oficial: [github.com/applephoria](https://github.com/applephoria)  
*GitHub:* `github.com/applephoria`
</div>
