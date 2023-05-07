/*FUP que calcule a média aritmética das 3 notas de um aluno e mostre, além do valor da média, uma mensagem de "Aprovado", caso a média seja igual ou superior a 7, a mensagem "Recuperação", caso a média se igual ou superior a 5 e inferior a 7, ou a mensagem “Reprovado”, caso a média seja inferior a 5.*/

#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    double nota1, nota2, nota3, media;

    cout << "\t****************************\n";
    cout << "\t* Média Aritmética Simples *\n";
    cout << "\t****************************\n";

    cout << "Insira a 1ª Nota: ";
    cin >> nota1;

    cout << "Insira a 2ª Nota: ";
    cin >> nota2;

    cout << "Insira a 3ª Nota: ";
    cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3;    

    if (media >= 7)
    {
        cout << "\tMédia Final: " << media << " * Aprovado *";
    } else if (media >= 5)
    {
        cout << "\tMédia Final: " << media << "Recuperação";
    } else if (media < 5)
    {
        cout << "\tMédia Final: " << media << "Reprovado";
    }    
}