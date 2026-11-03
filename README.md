# Algoritmo Genético - Problema da Mochila

Implementação em C++ dos operadores básicos de um algoritmo genético, aplicados a uma variação do Problema da Mochila (Knapsack Problem).

O programa recebe 6 soluções iniciais, calcula o valor e o peso de cada uma e gera 4 novas soluções por meio de cruzamento e mutação. Toda a lógica é feita com operações bit a bit.

> **Alcance do projeto:** o programa executa uma única rodada de operadores, sem seleção nem várias gerações. Portanto, ele não busca a melhor combinação de itens.

## Como funciona

### Representação das soluções

Cada solução é um número de 16 bits (de 0 a 65535), e cada bit indica se um item está na mochila: 1 significa que está, e 0, que não está. Uma solução é válida quando o peso total não passa de **20 kg**.

| Bit | Peso (kg) | Valor (R$) |
|---:|---:|---:|
| 0 | 1 | 12 |
| 1 | 4 | 4 |
| 2 | 2 | 3 |
| 3 | 5 | 10 |
| 4 | 4 | 15 |
| 5 | 2 | 20 |
| 6 | 1 | 10 |
| 7 | 4 | 2 |
| 8 | 3 | 1 |
| 9 | 2 | 1 |
| 10 | 1 | 3 |
| 11 | 9 | 15 |
| 12 | 4 | 10 |
| 13 | 5 | 8 |
| 14 | 3 | 4 |
| 15 | 12 | 4 |

**Exemplo:** a solução `12329` em binário é `0011 0000 0010 1001`, com os bits 0, 3, 5, 12 e 13 ligados.

- **Peso:** 1 + 5 + 2 + 4 + 5 = 17 kg
- **Valor:** 12 + 10 + 20 + 10 + 8 = R$ 60
- **Resultado:** solução válida, pois 17 kg não passa do limite

### Operadores genéticos

| Operador | Soluções usadas | O que faz |
|---|---|---|
| Cruzamento de ponto único | 1 e 2 | Junta os 8 bits altos da solução 1 com os 8 bits baixos da solução 2 |
| Cruzamento aritmético | 3 e 4 | Aplica um AND bit a bit entre as duas soluções |
| Mutação simples | 5 | Inverte o bit 9 |
| Mutação dupla | 6 | Inverte os bits 12 e 3 |

## Estrutura do projeto

- `MainMochila.cpp`: lê as soluções, chama os operadores e exibe os resultados.
- `Genetico.cpp` / `Genetico.h`: contêm os operadores genéticos e a função de avaliação.
- `Binario.cpp` / `Binario.h`: contêm as operações em nível de bit, como ligar, desligar e testar bits, AND, OR e as
