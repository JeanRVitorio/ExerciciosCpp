/*FUP que calcule o peso de um elevador, onde cada pessoa que entra informa o peso, caso atinga 180KG, o elevador informa que esta no peso maximo;*/

#include <iostream>
using namespace std;

int main() {
	system ("chcp 65001");
	
	cout << "\n *********************\n";
	cout << "\n * Carga Máxima (Kg) *\n";
	cout << "\n *********************\n";
    cout << "\n";

    int pesos[20], carga = 0, i = 0;

    while (carga < 180 && i < 20) {
        cout << "- Insira o Peso: ";
        cin >> pesos[i];
        carga += pesos[i];
        i++;
    }
    
    if (carga >= 180) {
        cout << "\nCarga Atual: " << carga << "Kg\n\n";
        cout << "\t** Carga Máxima Atingida (Max 180KG) **";
    }
}