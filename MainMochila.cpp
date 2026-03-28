#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Genetico.h"
#include "Binario.h"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[m"

int main(void) {
system("chcp 65001 > nul"); //resolve o problema de acentuação no programa
unsigned short solucao1, solucao2, solucao3, solucao4, solucao5, solucao6;
std::cout << "Entre com 6 soluções inciais (números entre 0 e 65535): ";
std::cin >> solucao1 >> solucao2 >> solucao3 >> solucao4 >> solucao5 >> solucao6;
std::cout << std::endl;


std::cout << "  Resultado da avaliação\n";
std::cout <<  "- - - - - - - - - - - - - -"  << std::endl;

std::cout << std::setw(5) << solucao1 << " - ";
if (avaliacao(solucao1) == true) {
	std::cout << " -" << GREEN << " OK" << RESET << std::endl; //lembre se a função avaliar ja retorna um bool e tbm ja imprime o peso e o valor;
}
else {
	std::cout << " -" << RED << " X" << RESET << std::endl;
}
//====================================//
std::cout << std::setw(5) << solucao2 << " - ";
if (avaliacao(solucao2) == true) {
std::cout << " -" << GREEN << " OK" << RESET << std::endl; //lembre se a função avaliar ja retorna um bool e tbm ja imprime o peso e o valor;
}
else {
	std::cout << " -" << RED << " X" << RESET << std::endl;
}
//====================================//
std::cout << std::setw(5) << solucao3 << " - ";
if (avaliacao(solucao3) == true) {
	std::cout << " -" << GREEN << " OK" << RESET << std::endl; //lembre se a função avaliar ja retorna um bool e tbm ja imprime o peso e o valor;
}
else {
	std::cout << " -" << RED << " X" << RESET << std::endl;
}
//====================================//
std::cout << std::setw(5) << solucao4 << " - ";
if (avaliacao(solucao4) == true) {
	std::cout << " -" << GREEN << " OK" << RESET << std::endl; //lembre se a função avaliar ja retorna um bool e tbm ja imprime o peso e o valor;
}
else {
	std::cout << " -" << RED << " X" << RESET << std::endl;
}
//====================================//
std::cout << std::setw(5) << solucao5 << " - ";
if (avaliacao(solucao5) == true) {
	std::cout << " -" << GREEN << " OK" << RESET << std::endl; //lembre se a função avaliar ja retorna um bool e tbm ja imprime o peso e o valor;
}
else {
	std::cout << " -" << RED << " X" << RESET << std::endl;
}
//====================================//
std::cout << std::setw(5) << solucao6 << " - ";
if (avaliacao(solucao6) == true) {
	std::cout << " -" << GREEN << " OK" << RESET << std::endl; //lembre se a função avaliar ja retorna um bool e tbm ja imprime o peso e o valor;
}
else {
	std::cout << " -" << " -" << RED << " X" << RESET << std::endl;
}
//====================================//

std::cout << "- - - - - - - - - - - - - -" << std::endl; //agora sera feito as avaliações para os cruzamentos geneticos;

short unsigned resultadoPontoUnico = cruzamentoPontoUnico(solucao1, solucao2);
std::cout << std::setw(5) << resultadoPontoUnico << " - ";
if (avaliacao(resultadoPontoUnico) == true) {
	std::cout << " -" << GREEN << " OK" << RESET << std::endl;
}
else {
	std::cout << " -" << RED << " X" << RESET << std::endl;
}
//====================================//
short unsigned resultadoAritmetico = cruzamentoAritmetico(solucao3, solucao4);
std::cout << std::setw(5) << resultadoAritmetico << " - ";
if (avaliacao(resultadoAritmetico) == true) {
	std::cout << " -" << GREEN << " OK" << RESET << std::endl;
}
else {
	std::cout << " -" << RED << " X" << RESET << std::endl;
}
//====================================//
short unsigned resultadoMutacaoSimples = mutacaoSimples(solucao5);
std::cout << std::setw(5) << resultadoMutacaoSimples << " - ";
if (avaliacao(resultadoMutacaoSimples) == true) {
	std::cout << " -" << GREEN << " OK" << RESET << std::endl;
}
else {
	std::cout << " -" << RED << " X" << RESET << std::endl;
}
//====================================//
short unsigned resultadoMutacaoDupla = mutacaoDupla(solucao6);
std::cout << std::setw(5) << resultadoMutacaoDupla << " - ";
if (avaliacao(resultadoMutacaoDupla) == true) {
	std::cout << " -" << GREEN << " OK" << RESET << std::endl;
}
else {
	std::cout << " -" << RED << " X" << RESET << std::endl;
}
	system("pause");
	return 0;
}
