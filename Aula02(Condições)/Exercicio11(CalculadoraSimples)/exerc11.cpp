/*FUP que solicite a operação (+,-,/,*) e dois numeros, calcule a operação solicitada e informe o resultado*/

#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    char operacao;
    double valor1, valor2, resultado;    

    cout << "\t***********************\n";
    cout << "\t* Calculadora Simples *\n"; 
    cout << "\t***********************\n\n";

    cout << "\tEscolha a operaçâo: \n";
    cout << "\t\t[+] Soma\n";
    cout << "\t\t[-] Diminuição\n";
    cout << "\t\t[*] Multiplicação\n";
    cout << "\t\t[/] Divisão\n";
    cin >> operacao;

    cout << "Insira o 1º valor: ";
    cin >> valor1;

    cout << "Insira o 2º valor: ";
    cin >> valor2;

    if (operacao == '+')
    {
        resultado = valor1 + valor2;
    } else if (operacao == '-')
    {
        resultado = valor1 - valor2;
    } else if (operacao == '*')
    {
        resultado = valor1 * valor2;
    } else if (operacao == '/')
    {
        resultado = valor1 / valor2;
    }
    cout << "Resultado é: " << resultado;

}
