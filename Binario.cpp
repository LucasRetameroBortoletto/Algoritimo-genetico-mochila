#include "Binario.h"
int ligarBit(int valorA, int posicao) {
	short unsigned mascara = 1 << posicao; //lembrese 1 como um short Us ---> 0000 0000 0000 0001
	return valorA | mascara; // | serve como or, ou seja, se tiver ao menos um 1 ele desce como 1, se tiver 0 e 0, ele desce como 0
}

int desligarBit(int valorA, int posicao) {
	short unsigned mascara = ~(1 << posicao); // no caso invertemos a mascara e colocamos o 1 acima apenas do lugar na qual queremos desligar(**lembrese do valor 1 em bits**)
	return valorA & mascara; //& esse operador diferente do | só desce 1 caso os dois números forem 1, caso contrario desce como 0. E ja que invertemos o valor de 1, oque seria
	// 1 em ligarBit se torna 0 aqui, então 0 sera colocado na posicao (Posicao) e entao vai desligar o bit selecionado
}

bool testarBit(int valorA, int posicao) { // imagine valorA 1111 1111 0000 0000 e mascara vai receber 0000 0000 0000 0001 sendo que 1 é movel; & apenas retora 1 se ambos forem 1
											// isso quer dizer que se 1111(valorA) -e- a posicao for 0001... o bit 4 é sera o unico 1 em sua base/ ou seja bit 4 é true.
	short unsigned mascara = 1 << posicao;
	if (mascara & valorA) {
		return true;
	}
	else {
		return false;
	}


}

int andBinario(int valoraA, int valorB) { //apenas usa o operador AND bit a bit de forma pura entre os valores
	return (valoraA & valorB);
}

int orBinario(int valorA, int valorB) {
	return (valorA | valorB);
}

int bitsBaixos(int valorA) {
	short unsigned mascara = 255; // esse valor pode ser representado por 0000 0000 1111 1111
	return (valorA & mascara); 
}

int bitsAltos(int valorA) {
	short unsigned mascara = 65280; //no caso esse valor pode ser representado por 1111 1111 0000 0000 em decimais
	return (valorA & mascara);  // junto a isso usando o operador AND apenas os 8 primeiros numeros irão descer 1, indicando true
}