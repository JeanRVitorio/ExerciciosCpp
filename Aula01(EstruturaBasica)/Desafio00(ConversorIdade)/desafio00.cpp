/*Desafio 0) FUP que leia a idade de uma pessoa em anos e imprima a idade em meses e em dias.*/

#include <iostream>
using namespace std;

int idade, meses, dias;

int main()
{
    system("chcp 65001");

    cout << "\t**********************\n";
    cout << "\t* Conversor de Idade *\n";
    cout << "\t**********************\n";

    cout << "\n";
    cout << "Insira o Valor da Idade em Anos: ";
    cin >> idade;

    meses = idade * 12;

    dias = idade * 365;

    cout << "\n";
    cout << "\tIdade Equivalente em Meses: " << meses;

    cout << "\n";
    cout << "\tIdade Equivalente em Dias: " << dias;
}