/*FUP que leia 10 números e verifique quantos destes números são negativos.*/

#include <iostream>
using namespace std;

int num;

int main()
{
    system("chcp 65001");

    cout << "\n *******************************\n";
	cout << "\n * Verifica caso seja Negativo *\n";
	cout << "\n *******************************\n";
    cout << "\n";

    int numeros[11], contadorNeg = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Insira o " << i << "º Número:";
        cin >> numeros[i];
        if (numeros[i] < 0)
        {
            contadorNeg++;
        } 
    }
    cout << "Quantidade de Números Negativos: " << contadorNeg;
}