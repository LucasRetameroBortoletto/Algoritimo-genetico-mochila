# 🎒 Algoritmo Genético - Problema da Mochila (Knapsack Problem)

Este projeto é uma implementação em C++ que aplica os conceitos base de **Algoritmos Genéticos** para resolver uma variação do clássico **Problema da Mochila** (Knapsack Problem). 

O programa recebe um conjunto de indivíduos iniciais (soluções representadas por números inteiros de 16 bits), avalia o peso e o valor total de cada um e, em seguida, aplica funções genéticas (Cruzamento e Mutação) para gerar e avaliar novos indivíduos.

## 🚀 Funcionalidades e Técnicas Utilizadas

* **Manipulação de Bits (Bitwise):** Os itens da mochila são representados pelos bits de um número inteiro (`unsigned short` de 16 bits). A verificação da presença de cada item é feita inteiramente através de operações lógicas bit a bit.
* **Operadores Genéticos Implementados:**
  * Cruzamento de Ponto Único
  * Cruzamento Aritmético
  * Mutação Simples
  * Mutação Dupla
* **Avaliação de Fitness:** Calcula se a mochila ultrapassou o peso limite e soma o valor dos itens coletados.
* **Interface via Terminal (CLI):** O programa conta com uma formatação visual rica utilizando **Códigos de Escape ANSI** para cores (Verde para soluções válidas, Vermelho para inválidas) e a biblioteca `<iomanip>` para alinhamento perfeito de colunas.

## 📁 Estrutura do Projeto

* `main.cpp` - Ponto de entrada do programa, gerencia a entrada de dados, chama as funções genéticas e formata a saída no console.
* `Genetico.cpp` / `Genetico.h` - Contém as implementações dos operadores de cruzamento e mutação.
* `Binario.cpp`/ `Binario.h` - Auxiliares para visualização ou manipulação em nível de bit.

## 🛠️ Como Compilar e Executar

Certifique-se de ter um compilador C++ instalado (como o GCC/MinGW).

1. Clone o repositório (para quem for baixar e testar o projeto)/Baixar pasta:
   ```bash
   git clone https://github.com/LucasRetameroBortoletto/Algoritimo-genetico-mochila.git
   ```
2. Navegue até a pasta do projeto e compile os arquivos:
   ```bash
   g++ *.cpp -o genetico
   ```
3. Execute o programa:
   * No Windows: `genetico.exe`
   * No Linux/Mac: `./genetico`

## 💻 Exemplo de Uso

Ao iniciar o programa, ele solicitará a entrada de 6 números inteiros (entre 0 e 65535) que representam as soluções da primeira geração.

**Entrada:**
```text
Entre com 6 soluções iniciais: 60504 25000 12329 38054 1259 732
```

**Saída Esperada no Terminal:**
```text
Resultado da Avaliacao
-------------------------
60504 - 69R$ - 40Kg - X
25000 - 45R$ - 22Kg - X
12329 - 60R$ - 17Kg - OK
38054 - 46R$ - 29Kg - X
 1259 - 61R$ - 18Kg - OK
  732 - 41R$ - 18Kg - OK
-------------------------
60584 - 66R$ - 41Kg - X
 4128 - 30R$ -  6Kg - OK
 1771 - 62R$ - 20Kg - OK
 4820 - 41R$ - 17Kg - OK
```
*(Nota: No console real, os "OK" e "X" aparecem formatados em verde e vermelho).*

## 🎓 Contexto
Projeto desenvolvido com o objetivo de fixar os conceitos de algoritmos genéticos (operadores bit a bit) limitando o uso de estruturas de repetição (foco em lógica booleana sequencial).
   
