# 💻 Caderno Prático de Programação em C
> **Baseado nos Capítulos 1, 2 e 3 do clássico *"C Como Programar"* (Paul & Harvey Deitel, 6ª Edição)**  
> **Curadoria Pedagógica: Prof. Marcel Florentino "Maçã" • [github.com/applephoria](https://github.com/applephoria)**

---

> 🏷️ **Marca D'água & Tag Oficial de Autoria:** `github.com/applephoria`

---

> 💡 **Instruções para o Aluno:**  
> Cada exercício deve ser resolvido em um arquivo `.c` separado e independente.  
> Adote boas práticas de Clean Code: nomes de variáveis expressivos, indentação consistente (4 espaços ou 2 espaços), comentários explicativos e cabeçalho autoral.

---

### 🚀 Desafio 01: O Cartão de Visitas e as Sequências de Escape (Cap. 1)
* **Objetivo:** Dominar a função de saída padrão `printf()` e o uso de sequências de escape.
* **Enunciado:** Escreva um programa em C que imprima na tela um "Cartão de Visitas de Terminal" perfeitamente formatado. Seu programa deve exibir:
  - Seu nome e apelido entre aspas duplas reais (exemplo: `Marcel Florentino "Maçã"`).
  - Três tecnologias ou linguagens de interesse tabuladas em colunas alinhadas com `\t`.
  - Uma barra invertida literal (`\`) desenhada na tela.
  - Um aviso sonoro do sistema (caractere de alerta `\a`).
* **Regra de Ouro:** Não utilize quebras de linha manuais em excesso; explore o poder dos caracteres de controle `\n`, `\t`, `\"`, `\\` e `\a`.

---

### 🚀 Desafio 02: A Central Aritmética Corporativa (Cap. 2)
* **Objetivo:** Praticar leitura com `scanf`, operadores aritméticos binários e prevenção de falhas de divisão por zero.
* **Enunciado:** Desenvolva um programa que solicite ao usuário dois números inteiros (`num1` e `num2`). O programa deve calcular e exibir:
  1. A **Soma** ($num1 + num2$)
  2. A **Diferença / Subtração** ($num1 - num2$)
  3. O **Produto / Multiplicação** ($num1 \times num2$)
  4. O **Quociente Inteiro** ($num1 / num2$)
  5. O **Resto da Divisão / Módulo** ($num1 \pmod{num2}$)
* **Proteção Fail-Fast:** Se o usuário digitar `0` como segundo número, o programa deve avisar imediatamente que não é possível realizar divisão por zero, impedindo uma falha crítica de exceção de hardware (*floating point exception / trap*).

---

### 🚀 Desafio 03: O Inspetor Relacional de Três Inteiros (Cap. 2)
* **Objetivo:** Manipular operadores relacionais e de igualdade (`==`, `!=`, `<`, `>`, `<=`, `>=`) utilizando estruturas `if` simples (estilo Deitel Capítulo 2, sem `else` e sem operadores lógicos complexos).
* **Enunciado:** Escreva um programa que receba **três números inteiros** diferentes digitados pelo usuário. Seu algoritmo deve:
  - Determinar e exibir qual é o **Maior** valor.
  - Determinar e exibir qual é o **Menor** valor.
  - Informar se os três valores são idênticos entre si.

---

### 🚀 Desafio 04: O Classificador de Paridade (Cap. 2)
* **Objetivo:** Aplicar o operador módulo `%` e entender a paridade numérica na arquitetura de computadores.
* **Enunciado:** Crie um programa que leia um número inteiro qualquer. O programa deve verificar se o número é **PAR** ou **ÍMPAR** utilizando o operador `% 2` e imprimir a resposta de forma elegante.
* **Desafio Teórico Opcional:** Explique no comentário do código por que, na base binária da memória RAM, todo número par tem o bit menos significativo (LSB) igual a `0`.

---

### 🚀 Desafio 05: O Detector de Múltiplos (Cap. 2)
* **Objetivo:** Modelar relações de divisibilidade matemática com validação de entrada.
* **Enunciado:** Escreva um programa que leia dois números inteiros. O programa deve determinar se o primeiro número é múltiplo do segundo.
  - *Exemplo:* Se o usuário digitar `15` e `5`, o programa deve exibir: `15 e multiplo de 5`.
  - *Exemplo 2:* Se o usuário digitar `10` e `4`, o programa deve exibir: `10 nao e multiplo de 4`.

---

### 🚀 Desafio 06: A Tabela Alinhada de Quadrados e Cubos (Cap. 2)
* **Objetivo:** Construção de relatórios tabulares limpos no terminal usando especificadores de formato.
* **Enunciado:** Escreva um programa que calcule e imprima os quadrados e os cubos dos números inteiros de **0 a 10**. Os dados devem ser exibidos em formato de tabela perfeitamente alinhada com cabeçalho:
```text
numero	quadrado	cubo
0	0		0
1	1		1
2	4		8
...
10	100		1000
```
* **Dica:** Utilize sequências de tabulação `\t` ou especificadores de largura de campo (ex: `%d\t%d\t%d\n`).

---

### 🚀 Desafio 07: O Sistema de Média com Valor Sentinela `-1` (Cap. 3)
* **Objetivo:** Dominar repetição indefinida (controlada por sentinela), acumuladores e casting explícito de tipos primitivos.
* **Enunciado:** Um professor precisa calcular a média das notas de sua turma, mas ele não sabe com antecedência quantos alunos fizeram a avaliação. Desenvolva um programa que leia notas inteiras (de `0` a `100`) repetidamente.
  - O laço de repetição `while` deve continuar rodando até que o professor digite `-1` (o valor sentinela).
  - Ao final, se nenhuma nota foi inserida, o programa deve exibir: `Nenhuma nota foi informada`.
  - Se notas foram inseridas, o programa deve calcular a média aritmética e exibi-la formatada com exatamente **duas casas decimais** (`%.2f`).
* **Atenção:** A divisão de inteiros descarta as casas decimais. Utilize a conversão explícita `(float)` para garantir a precisão no ponto flutuante!

---

### 🚀 Desafio 08: O Fatorial Matemático com Laço `while` (Cap. 3)
* **Objetivo:** Implementar laço `while` decrescente e entender acumuladores multiplicativos.
* **Enunciado:** O fatorial de um inteiro não-negativo $N$ (indicado por $N!$) é o produto de todos os inteiros positivos menores ou iguais a $N$:
  $$N! = N \times (N - 1) \times (N - 2) \times \dots \times 1$$
  *(Com $0! = 1$ por definição matemática).*
  Escreva um programa que leia um valor inteiro não-negativo e calcule o seu fatorial usando uma estrutura de repetição `while`.
* **Tratamento:** Caso o usuário digite um número negativo, avise que o fatorial não é definido para inteiros negativos e encerre graciosamente.

---

### 🚀 Desafio 09: O Rastreador de Extremos em Tempo Real (Cap. 3)
* **Objetivo:** Processamento de fluxos de dados com complexidade espacial $O(1)$ (sem arrays/vetores na memória RAM).
* **Enunciado:** Escreva um programa que pergunte inicialmente ao usuário: *"Quantos numeros voce deseja analisar?"*.
  - Em seguida, através de um laço `while` controlado por contador, o programa deve ler cada um desses números.
  - À medida que os números são inseridos, o programa deve rastrear e atualizar o **Maior** e o **Menor** valor da sequência.
  - No final, imprima o Maior e o Menor número lidos.

---

### 🚀 Desafio 10: A Calculadora de Saúde & IMC Corporativa (Cap. 2 e 3)
* **Objetivo:** Integrar cálculos de ponto flutuante com estruturas de decisão aninhadas/encadeadas (`if...else if...else`).
* **Enunciado:** Crie um programa corporativo de bem-estar que leia o **peso** (em quilogramas, `float`) e a **altura** (em metros, `float`) de um colaborador. O programa deve calcular o Índice de Massa Corporal (IMC) usando a fórmula:
  $$\text{IMC} = \frac{\text{peso}}{\text{altura}^2}$$
  O programa deve exibir o valor do IMC calculado com 1 casa decimal e a sua classificação oficial de acordo com a tabela da OMS (Organização Mundial da Saúde):
  - **Abaixo do peso:** IMC menor que $18.5$
  - **Peso normal:** IMC entre $18.5$ e $24.9$
  - **Sobrepeso:** IMC entre $25.0$ e $29.9$
  - **Obesidade Grau I:** IMC entre $30.0$ e $34.9$
  - **Obesidade Grau II:** IMC entre $35.0$ e $39.9$
  - **Obesidade Grau III (Mórbida):** IMC de $40.0$ ou superior.

---

<div align="center">

> *"Qualquer tolo pode escrever código que um computador entenda. Bons programadores escrevem código que humanos podem entender."*  
> — **Martin Fowler**

**Marcel Florentino "Maçã"** | Perfil Oficial: [github.com/applephoria](https://github.com/applephoria)  
*Tag de Autoria:* `github.com/applephoria`
</div>
