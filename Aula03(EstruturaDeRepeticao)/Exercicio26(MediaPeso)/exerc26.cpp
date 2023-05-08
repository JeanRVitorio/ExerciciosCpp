/*FUP que solicite o peso de 5 pessoas e calcule a media;
Imprima o resultado*/

#include <iostream>
using namespace std;

double peso, soma;

int main() {
	system ("chcp 65001");
	
	cout << "\n **********************\n";
	cout << "\n * Média de Peso (Kg) *\n";
	cout << "\n **********************\n";
    cout << "\n";
	
	for (int i = 1; i <= 5; i++)
    {
        cout << "Insira o Peso da Pessoa " << i << " em Kg: ";
        cin >> peso;

        soma += peso;
    }
    double media = soma / 5;
    
    cout << "\tMédia de Peso: " << media << "Kg";
}