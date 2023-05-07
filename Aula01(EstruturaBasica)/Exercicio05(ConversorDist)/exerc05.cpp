/*FUP que solicite a quantidade de milhas e converta para quilometros (1milha = 1.60934kms);*/

#include <iostream>
using namespace std;

double milhas, kms;

int main()
{
    system("chcp 65001");

    cout << "\t****************************************\n";
    cout << "\t* Conversor de Milhas para Quilometros *\n";
    cout << "\t****************************************\n";

    cout << "\n";
    cout << "Insira o Valor em Milhas: ";
    cin >> milhas;

    kms = milhas * 1.60934;

    cout << "\n";
    cout << "\tDistância Equivalente em Quilometros: " << kms;
}