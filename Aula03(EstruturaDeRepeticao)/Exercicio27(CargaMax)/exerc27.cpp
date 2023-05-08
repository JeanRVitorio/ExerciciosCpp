/*FUP que calcule o peso de um elevador, onde cada pessoa que
entra informa o peso, caso atinga 180KG, o elevador informa que
esta no peso maximo*/

#include <iostream>
using namespace std;

int main() {
	system ("chcp 65001");

    double peso, carga;
	
	cout << "\n *********************\n";
	cout << "\n * Carga Máxima (Kg) *\n";
	cout << "\n *********************\n";
    cout << "\n";

    do
    {
        cout << "Insira o Peso em Kg: ";
        cin >> peso;
        carga = peso + carga;
    } while (carga < 180);
    
    cout << "\tCarga Atual: " << carga << "Kg\n";
    cout << "\tCarga Máxima Atingida (Max 180KG)";

}