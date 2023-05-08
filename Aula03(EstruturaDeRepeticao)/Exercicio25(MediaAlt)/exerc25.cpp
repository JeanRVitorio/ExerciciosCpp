/*FUP que solicite quantidade de pessoas, depois solicite a altura
de cada uma e calcule a media da altura das pessoas*/

#include <iostream>
using namespace std;

int main() 
{
	system ("chcp 65001");

    int numP;
    float alt, soma;    
	
	cout << "\n *******************\n";
	cout << "\n * Média de Altura *\n";
	cout << "\n *******************\n";
	
	cout << "\nInsira o Número de Pessoas: ";
	cin >> numP;
    cout << "\n";

    for (int i = 0; i < numP; i++)
    {
        cout << "Digite a Altura: ";
        cin >> alt;

        soma += alt;
    }
    double media = soma / numP;

    cout << "\tMédia de Altura: " << media << "m";

}