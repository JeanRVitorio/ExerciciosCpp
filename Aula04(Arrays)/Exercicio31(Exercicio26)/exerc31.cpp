/*FUP que solicite o peso de 5 pessoas e calcule a media; Imprima o resultado;*/

#include <iostream>
using namespace std;

int main() 
{
    system("chcp 65001");

    cout << "\t******************************\n";
    cout << "\t* Média de Peso de 5 Pessoas *\n";
    cout << "\t******************************\n";

    double peso[5];
    double somaPeso = 0;

    for (int i = 0; i < 5; i++) {

        cout << "- Insira a Peso da "<< i + 1 << "º pessoa: ";
        cin >> peso[i];
        somaPeso += peso[i];
    }

    double mediaPeso = somaPeso / 5;
    cout << "\n************************************\n";
    cout << " A Média da Peso das Pessoas é: " << mediaPeso << "Kg\n";
    cout << "************************************\n";
}