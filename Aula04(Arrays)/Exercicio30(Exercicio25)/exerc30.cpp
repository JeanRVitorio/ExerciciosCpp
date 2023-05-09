/*FUP que solicite quantidade de pessoas, depois solicite a altura de cada uma e calcule a media da altura das pessoas;*/

#include <iostream>
using namespace std;

int main() 
{
    system("chcp 65001");

    cout << "\t*******************\n";
    cout << "\t* Média de Altura *\n";
    cout << "\t*******************\n";

    int numPessoas;

    cout << "Insira o Número de Pessoas: ";
    cin >> numPessoas;

    double alturas[numPessoas];
    double somaAlturas = 0;

    for (int i = 0; i < numPessoas; i++) {

        cout << "\t - Insira a Altura da "<< i + 1 << "º pessoa: ";
        cin >> alturas[i];
        somaAlturas += alturas[i];
    }

    double mediaAltura = somaAlturas / numPessoas;
    cout << "***************************************\n";
    cout << "A Média da Altura das Pessoas é: " << mediaAltura << "m\n";
    cout << "***************************************\n";
}