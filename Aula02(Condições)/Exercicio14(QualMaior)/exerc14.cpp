/*FUP que solicite dois numero e verifique qual é o maior;*/

#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    double valor1, valor2;

    cout << "\t******************\n";
    cout << "\t* Qual é o Maior *\n"; 
    cout << "\t******************\n\n";

    cout << "Insira o 1º Valor: ";
    cin >> valor1;

    cout << "Insira o 2º Valor: ";
    cin >> valor2;

    if (valor1 > valor2)
    {
        cout << "\tO 1º Número é Maior\n";
    } else if (valor1 < valor2)
    {
        cout << "\tO 2º Número é Maior\n";
    }
}