/*Arrays (use menos variaveis do que o exercicio anterior!)
        FUP que imprima a tabuada de um numero de 0 a 10;*/

#include <iostream>
using namespace std;

int main() 
{
    system("chcp 65001");

    cout << "\t***********\n";
    cout << "\t* Tabuada *\n";
    cout << "\t***********\n";

    int numero;

    cout << "Insira o Número: ";
    cin >> numero;

    int tabuada[10];

    for (int i = 1; i <= 10; i++) {
        
        tabuada[i] = numero * i;
        cout << i << " X " << numero << " = " << tabuada[i] << "\n";
    }
}