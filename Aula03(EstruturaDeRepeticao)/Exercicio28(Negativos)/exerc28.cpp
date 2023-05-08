/*FUP que leia 10 números e verifique quantos destes números
são negativos*/

#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    int num, contadorNeg = 0;

    cout << "\n *******************************\n";
	cout << "\n * Verifica caso seja Negativo *\n";
	cout << "\n *******************************\n";
    cout << "\n";

    for (int i = 1; i <= 10; i++)
    {
        cout << "Insira o " << i << "º Número: ";
        cin >> num;
        if (num < 0)
        {
            contadorNeg++;
        } 
    }
    cout << "Número de Negativos: " << contadorNeg;
}