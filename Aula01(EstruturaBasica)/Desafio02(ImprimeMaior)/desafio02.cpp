/* Desafio 2) FUP que leia dois números inteiros e imprima o maior deles.*/

#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    double valor1, valor2;

    cout << "\t*************************\n";
    cout << "\t* Imprime o Maior Valor *\n";
    cout << "\t*************************\n";

    cout << "\n";
    cout << "Insira o 1º Valor: ";
    cin >> valor1;

    cout << "\n";
    cout << "Insira o 2º Valor: ";
    cin >> valor2;

    if (valor1 > valor2)
    {
        cout << "\n";
        cout << "\tEsse é o Maior valor: " << valor1;
    } else if (valor1 < valor2)
    {
        cout << "\n";
        cout << "\tEsse é o Maior valor: " << valor2;
    }
    
}