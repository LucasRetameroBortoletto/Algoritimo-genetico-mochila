#include "Genetico.h"
#include "Binario.h"
#include <iostream>
#include <iomanip>

int cruzamentoPontoUnico(int solucao1, int solucao2) {
	short unsigned cruzamento1 = bitsAltos(solucao1); // o programa opera chamando as funções de Binario.cpp para executar as codificações com os bits
	short unsigned cruzamento2 = bitsBaixos(solucao2);

	return orBinario(cruzamento1, cruzamento2);
}

int cruzamentoAritmetico(int solucao1, int solucao2) {
	return andBinario(solucao1, solucao2); // utiliza a função &
}

int mutacaoSimples(int solucao) {
	if (testarBit(solucao, 9) == true) { //testa se bit da posição 9 esta ligado, caso sim, desligamos ele, caso contrario, ligamos 
		return desligarBit(solucao, 9);
	}
	else {
		return ligarBit(solucao, 9);
	}
}

int mutacaoDupla(int solucao) { //testa duas vezes, para dois bits separados na "solucao" e retorna ela alterada
	if (testarBit(solucao, 12) == true) {
		solucao = desligarBit(solucao, 12);
	}
	else {
		solucao	= ligarBit(solucao, 12);
	}
	if (testarBit(solucao, 3) == true) {
		solucao = desligarBit(solucao, 3);
	}
	else {
		solucao = ligarBit(solucao, 3);
	}

	return solucao;
}
bool avaliacao(int solucao) { //os valores de preço e peso, estao no documento disponibilizado
	short unsigned pesoTotal = 0;
	short unsigned valorTotal = 0; //apenas armazena e soma com o proximo caso positivo
	if (testarBit(solucao, 0) == true) {
		pesoTotal = pesoTotal + 1;
		valorTotal = valorTotal + 12;
	}
	if (testarBit(solucao, 1) == true) {
		pesoTotal = pesoTotal + 4;
		valorTotal = valorTotal + 4;
	}
	if (testarBit(solucao, 2) == true) {
		pesoTotal = pesoTotal + 2;
		valorTotal = valorTotal + 3;
	}
	if (testarBit(solucao, 3) == true) {
		pesoTotal = pesoTotal + 5;
		valorTotal = valorTotal + 10;
	}
	if (testarBit(solucao, 4) == true) {
		pesoTotal = pesoTotal + 4;
		valorTotal = valorTotal + 15;
	}
	if (testarBit(solucao, 5) == true) {
		pesoTotal = pesoTotal + 2;
		valorTotal = valorTotal + 20;
	}
	if (testarBit(solucao, 6) == true) {
		pesoTotal = pesoTotal + 1;
		valorTotal = valorTotal + 10;
	}
	if (testarBit(solucao, 7) == true) {
		pesoTotal = pesoTotal + 4;
		valorTotal = valorTotal + 2;
	}
	if (testarBit(solucao, 8) == true) {
		pesoTotal = pesoTotal + 3;
		valorTotal = valorTotal + 1;
	}
	if (testarBit(solucao, 9) == true) {
		pesoTotal = pesoTotal + 2;
		valorTotal = valorTotal + 1;
	}
	if (testarBit(solucao, 10) == true) {
		pesoTotal = pesoTotal + 1;
		valorTotal = valorTotal + 3;
	}
	if (testarBit(solucao, 11) == true) {
		pesoTotal = pesoTotal + 9;
		valorTotal = valorTotal + 15;
	}
	if (testarBit(solucao, 12) == true) {
		pesoTotal = pesoTotal + 4;
		valorTotal = valorTotal + 10;
	}
	if (testarBit(solucao, 13) == true) {
		pesoTotal = pesoTotal + 5;
		valorTotal = valorTotal + 8;
	}
	if (testarBit(solucao, 14) == true) {
		pesoTotal = pesoTotal + 3;
		valorTotal = valorTotal + 4;
	}
	if (testarBit(solucao, 15) == true) {
		pesoTotal = pesoTotal + 12;
		valorTotal = valorTotal + 4;
	}
	std::cout << std::setw(2) << valorTotal << "R$ - " << std::setw(2) << pesoTotal << "Kg";
	if (pesoTotal <= 20) {
		return true;
	}
	else {
		return false;
	}
}