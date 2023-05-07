/*6. FUP que solicite a duração de um evento em segundos e imprima em horas, minutos e segundos;*/

#include <iostream>
using namespace std;

double segundos, minutos, horas;

int main()
{
    system("chcp 65001");

    cout << "\t***********************************************\n";
    cout << "\t* Conversor de Segundos para Horas e Minutos  *\n";
    cout << "\t***********************************************\n";

    cout << "\n";
    cout << "Insira o Valor em Segundos: ";
    cin >> segundos;

    horas = segundos / 3600;

    minutos = segundos / 60;

    cout << "\n";
    cout << "\tSegundos Equivalente em Horas: " << horas;

    cout << "\n";
    cout << "\tSegundos Equivalente em Minutos: " << minutos;
}