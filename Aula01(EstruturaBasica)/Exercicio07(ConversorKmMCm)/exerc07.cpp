/*FUP que leia um valor em quilometros e converta para metros e centimetro;*/

#include <iostream>
using namespace std;

int kms, metros, centimetros;

int main()
{
    system("chcp 65001");

    cout << "\t*******************************************************\n";
    cout << "\t* Conversor de quilometros para Metros e Centímetros  *\n";
    cout << "\t*******************************************************\n";

    cout << "\n";
    cout << "Insira o Valor em Quilometros: ";
    cin >> kms;

    metros = kms * 1000;

    centimetros = kms * 100000;

    cout << "\n";
    cout << "\tQuilometros Equivalente em Metros: " << metros << "m";

    cout << "\n";
    cout << "\tQuilometros Equivalente em Centímetros: " << centimetros << "cm";
}