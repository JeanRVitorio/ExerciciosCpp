/*FUP que peça um número e imprima uma mensagem se esse número é positivo ou negativo;*/

#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    double valor;

    cout << "\t************************\n";
    cout << "\t* Positivo ou Negativo *\n"; 
    cout << "\t************************\n\n";

    cout << "Insira o Valor: ";
    cin >> valor;

    if (valor > 0)
    {
        cout << "\tNúmero Solicitado Positivo\n";
    } else if (valor < 0)
    {
        cout << "\tNúmero Solicitado Negativo\n";
    }
    
}