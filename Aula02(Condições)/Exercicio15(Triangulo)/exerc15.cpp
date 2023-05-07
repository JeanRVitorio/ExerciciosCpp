/*FUP que leia 3 valores a,b,c e verifique se eles formam ou não um triângulo. Caso os valores formem um triângulo, solicite a base e a altura, calcule (base * altura / 2) e escreva a área deste triângulo. Se não formam triângulo escreva os valores lidos.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    system("chcp 65001");

    double valor1, valor2, valor3;

    cout << "\t************************************************\n";
    cout << "\t* Verifica caso Forme Triangulo e Informa Área *\n"; 
    cout << "\t************************************************\n\n";

    cout << "Insira o 1º Valor: ";
    cin >> valor1;

    cout << "Insira o 2º Valor: ";
    cin >> valor2;

    cout << "Insira o 3º Valor: ";
    cin >> valor3;

    if (valor1 + valor2 > valor3 && valor1 + valor3 > valor2 && valor2 + valor3 > valor1) {
        double base, altura;
        cout << "Insira o Valor da Base: ";
        cin >> base;
        cout << "Insira o Valor da Altura: ";
        cin >> altura;
        double area = (base * altura) / 2;
        cout << "Área : " << area;
    } else {
        cout << "Dados Inseridos não Formam Triângulo";
    }
}