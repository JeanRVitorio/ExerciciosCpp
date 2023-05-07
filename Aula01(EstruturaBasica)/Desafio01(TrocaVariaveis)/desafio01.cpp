/*Desafio 1) FUP que leia dois valores A e B, efetue a troca dos valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar os valores das variáveis antes e depois de trocados;*/

#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    int valor1, valor2, temporario;

    cout << "\t**********************\n";
    cout << "\t* Troca de Variáveis *\n";
    cout << "\t**********************\n";

    cout << "Insira o Valor da 1ª Variável: ";
    cin >> valor1;

    cout << "Insira o Valor da 2ª Variável: ";
    cin >> valor2;

    cout << "\t1ª variável = " << valor1 << "\n";
    cout << "\t2ª variável = " << valor2 << "\n";

    cout << "Trocando de posição ficaria assim: \n";

    temporario = valor1;
    valor1 = valor2;
    valor2 = temporario;

    cout << "\t1ª variável = " << valor1 << "\n";
    cout << "\t2ª variável = " << valor2 << "\n";
}
