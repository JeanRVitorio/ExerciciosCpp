/*FUP que solicite dois numeros reais, realize a soma; Imprima o resultado;*/

#include <iostream>
using namespace std;

int valor1, valor2;

int main()
{
    system("chcp 65001");

    cout << "\t***************\n";
    cout << "\t* Soma Básica *\n";
    cout << "\t***************\n";

    cout << "Insira o Primeiro Valor que Deseja Somar: ";
    cin >> valor1;
    cout << "Insira o Segundo Valor que Deseja Somar: ";
    cin >> valor2;

    int soma = valor1 + valor2;

    cout << "\tResultado é: " << soma;
    return 0;
}