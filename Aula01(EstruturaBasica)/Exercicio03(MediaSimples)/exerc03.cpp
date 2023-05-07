/*FUP que solicite o peso de 5 pessoas e calcule a media; Imprima o resultado;*/

#include <iostream>
using namespace std;

double peso, pesoTotal, mediaPeso;

int main()
{
    system("chcp 65001");

    cout << "\t*****************\n";
    cout << "\t* Média de Peso *\n";
    cout << "\t*****************\n";

    for (int i = 1; i <= 5; i++)
    {
        system("cls"); // Limpa a tela após o valor ser digitado.
        cout << "Insira o Peso da " << i << "ª Pessoa: ";
        cin >> peso;

        pesoTotal += peso;

        mediaPeso = pesoTotal / 5;
    }
    
    cout << "\n";
    cout << "\tMédia de Peso é: " << mediaPeso << "Kg";

}