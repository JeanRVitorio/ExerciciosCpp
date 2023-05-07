/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao consumidor*/

#include <iostream>
using namespace std;

int main() 
{
	system ("chcp 65001");

    double custoFabrica;
    double custoImposto;
    double custoFinal;
	
	cout << "************** \n";
	cout << "* Custo Total *\n";
	cout << "************** \n";
	
	cout << "********************************\n";
	cout << "Insira o Custo de Fábrica ";
    cin >> custoFabrica;
	cout << "********************************\n";
	
	
	custoImposto = (custoFabrica * (0.45)) + custoFabrica;
	custoFinal = (custoImposto * (0.28)) + custoImposto;
	
	cout << "\t************************\n";
	cout << "\t* Custo Final é " << custoFinal << " *\n";
	cout << "\t************************\n";
}