/* FUP que solicite a quantidade de termos 
e imprima fibonacci até termo solicitado;*/

#include <iostream>
using namespace std;

int temporario, penultimo = 0, ultimo = 1, n, aux;


int main()
{
    system("chcp 65001");

    cout << "\n ************************\n";
	cout << "\n * Sequência Fibonacci  *\n";
	cout << "\n ************************\n";
    cout << "\n";
    
    cout << "Contagem começa com 0 e 1\n";
    cout << "Máximo até o 46º termo";
    
    cout << "Insira o Termo Da Sequência: ";
    cin >> n;
    cout << "\n";
    
    while(aux <= n){
        cout << (ultimo + penultimo) << "; ";

        temporario = penultimo;
        penultimo = ultimo;
        ultimo = ultimo + temporario;

        aux++;
    }
}