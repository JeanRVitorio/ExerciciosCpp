/*Desafio 3) FUP que solicite três numero e verifique qual é o menor;*/

#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    double valor1, valor2, valor3;

    cout << "\t******************\n";
    cout << "\t* Qual é o Maior *\n"; 
    cout << "\t******************\n\n";

    cout << "Insira o 1º Valor: ";
    cin >> valor1;

    cout << "Insira o 2º Valor: ";
    cin >> valor2;

    cout << "Insira o 3º Valor: ";
    cin >> valor3;

    if (valor1 < valor2 && valor1 < valor3)
    {
        cout << "\tO 1º Número é Menor\n";
    } else if (valor2 < valor1 && valor2 < valor3 )
    {
        cout << "\tO 2º Número é Menor\n";
    } else if (valor3 < valor1 && valor3 < valor2 )
    {
        cout << "\tO 3º Número é Menor\n";
    }
}