/*FUP que calcule o IMC -solicite se é H ou M e faça o calculo;
- para homens: (72.7*h)-58
- para mulheres: (62.1*h)-44.7*/

#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    char sexo;
    double altura, pesoIdeal;
// No enunciado da questão diz IMC, porém em pesquisa notei que a fórmula é para Peso Ideal de acorco com a altura.
    cout << "\t*****************************\n";
    cout << "\t* Calculadora de Peso Ideal *\n"; 
    cout << "\t*****************************\n\n";

    cout << "\tEscolha o Sexo:\n";
    cout << "\t[H] Homens [M] Mulheres -> ";
    cin >> sexo;    
    
    cout << "Insira o Valor da Altura em Metros: ";
    cin >> altura;

    if ( sexo == 'm' || sexo == 'M')
    {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else if (sexo == 'h' || sexo == 'H')
    {
        pesoIdeal = (72.7 * altura) - 58;
    } 
    cout << "\tSeu peso ideal é: " << pesoIdeal << "kg";
}