/*Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão é : F = (9*C+160)/5 Sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <iostream>
using namespace std;

double celsius, fahrenheit;

int main()
{
    system("chcp 65001");

    cout << "\t***************************************\n";
    cout << "\t* Conversor de Temperatura C° para F° *\n";
    cout << "\t***************************************\n";

    cout << "\n";
    cout << "Insira o Valor em Celsius: ";
    cin >> celsius;

    fahrenheit = ((9 * celsius) + 160) / 5;

    cout << "\n";
    cout << "\tTemperatura em Equivalente em Fahrenheit: " << fahrenheit << "°";
}