/*8. FUP que peça um número e imprima a tabuada deste número*/

#include <iostream>
using namespace std;

int valor;

int main()
{
    system("chcp 65001");

    cout << "\t************\n";
    cout << "\t* Tabuada  *\n";
    cout << "\t************\n";

    cout << "\n";
    cout << "Insira o Valor que deseja a Tabuada: ";
    cin >> valor;

    for (int i = 1; i <= 10; i++)
    {
        cout << valor << " X " << i << " = " << valor * i << "\n";
    }
    
}