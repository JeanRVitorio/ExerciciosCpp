/*FUP que leia o valor da hora do trabalhador e a quantidade de horas trabalhadas. Imprima o valor que o trabalhador deverá receber ao final do mês.;*/

#include <iostream>
using namespace std;

int horasTrabalhadas;
double valorHora;

int main()
{
    system("chcp 65001");

    cout << "\t***************\n";
    cout << "\t* Remuneração *\n";
    cout << "\t***************\n";

    cout << "Insira a Quantidade de Horas Trabalhadas: ";
    cin >> horasTrabalhadas;
    cout << "Insira o Valor da Hora de Trabalho: ";
    cin >> valorHora;

    double multiplicacao = valorHora * horasTrabalhadas;

    cout << "\n";
    cout << "\tTotal que Colaborador deve Receber é: R$" << multiplicacao;
    return 0;
}