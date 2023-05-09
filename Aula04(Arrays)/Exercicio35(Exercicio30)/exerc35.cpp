#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    system("chcp 65001");

    cout << "\n\t\t **********************\n";
	cout << "\n\t\t * Números Aleatórios *\n";
	cout << "\n\t\t **********************\n";
    cout << "\n";

    int numeros[5];
    
    srand(time(0));
    // Para atender as especificações
    cout << rand();
    numeros[0] = rand() % 8 + 1;
    numeros[1] = rand() % 8 + 9;
    numeros[2] = rand() % 6 + 17;
    numeros[3] = rand() % 6 + 23;
    numeros[4] = rand() % 6 + 24;
    
    for (int i = 0; i < 5; i++) {
        cout << "\t" << numeros[i] << "; ";
    }
}