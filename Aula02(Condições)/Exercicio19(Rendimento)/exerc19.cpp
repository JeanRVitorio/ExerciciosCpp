/* FUP que calcule os juros de determinado capital, taxa e tempo informados pelo usuário e
apresente na tela o valor do capital informado, os juros e o valor do montante da operação. O valor
da taxa deverá ser informado em valores decimais, ex.: 5% informar 0.05 e o tempo devera ser
informado em dias. 
	capital
	taxa em decimais
	tempo em dias
*/

#include <iostream>
using namespace std;

int main() 
{
	system ("chcp 65001");

    double capitalInicial, capitalFinal;
    float taxaJuros;
    int dias;
	
	cout << "\t************************ \n";
	cout << "\t* Rendimento de Capital *\n";
	cout << "\t************************ \n";
	
	cout << "******************************\n";
	cout << "Insira o Capital Inicial ";
    cin >> capitalInicial;
	cout << "******************************\n";
	
	cout << "**************************************** \n";
	cout << "Insira a Taxa dos Juros em Decimais ";
    cin >> taxaJuros;
	cout << "**************************************** \n";
	
	cout << "******************************************** \n";
	cout << "* Insira o Tempo do Investimento em Dias ";
    cin >> dias;
	cout << "******************************************** \n";
	
	capitalFinal = ((capitalInicial * taxaJuros) * (dias)) + (capitalInicial);
	
	cout << "\t********************************* \n";
	cout << "\t* Insira o Capital Final " << capitalFinal << " *\n";
	cout << "\t********************************* \n";
}