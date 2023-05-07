/*Desafio 3) FUP que peça um ano e verifique se ano informado é bissexto. Imprima
essa.*/

#include <iostream>
using namespace std;

int ano;

int main() {
	system ("chcp 65001");
	
	cout << "****************\n";
	cout << "* Ano Bissexto *\n";
	cout << "****************\n";
	
	cout << "************************************* \n";
	cout << "  Insira o Ano Que Deseja saber: ";
    cin >> ano;
	cout << "************************************* \n";
	
	
	if ( ano % 4 == 0 ){
		cout << "**************** \n";
		cout << "** É Bissexto ** \n";
		cout << "**************** \n";
	} else {
		cout << "******************** \n";
		cout << "** Não é Bissexto ** \n";
		cout << "******************** \n";
	}
}