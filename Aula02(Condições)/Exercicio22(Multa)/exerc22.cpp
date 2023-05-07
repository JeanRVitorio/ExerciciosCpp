/* FUP que leia a velocidade permitida em uma via, a velocidade praticada por um motorista, e
informe se o mesmo receberá multa ou não, e o valor a pagar. Caso tenha excedido a velocidade
em até 20% da permitida, o motorista receberá uma multa de R$ 102,00. Caso tenha excedido a
velocidade acima de 20% da permitida, o motorista receberá uma multa de R$ 500,00 */

#include <iostream>
using namespace std;

int veloc_maxima = 100;
int veloc_medida;

int main() {
	system ("chcp 65001");
	
	cout << "\t**************\n";
	cout << "\t* Velocidade *\n";
	cout << "\t**************\n";
	
	cout << "\t*************************************\n";
	cout << "\tInsira a Velocidade do Automóvel: ";
    cin >> veloc_medida;
	cout << "\t*************************************\n";
	
	if ( veloc_medida < 100){
		cout << "\t**********************************\n";
		cout << "\t* Dentro da Velocidade Permitida *\n";
		cout << "\t**********************************\n";
	} else if ( veloc_medida <= 120 && veloc_medida > 100 ) {
		cout << "\t********************************* \n";
		cout << "\t* Acima da Velocidade Permitida * \n";
		cout << "\t*** Valor da Multa R$ 102,00  *** \n";
		cout << "\t********************************* \n";
	} else if ( veloc_medida > 120 ) {
		cout << "\t********************************* \n";
		cout << "\t* Acima da Velocidade Permitida * \n";
		cout << "\t*** Valor da Multa R$ 500,00  *** \n";
		cout << "\t********************************* \n";
	}
}