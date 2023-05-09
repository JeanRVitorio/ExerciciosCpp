#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    system("chcp 65001");

    cout << "\n\t ***************************\n";
	cout << "\n\t * Números Aleatórios (15) *\n";
	cout << "\n\t ***************************\n";
    cout << "\n";

    int numeros[15];
    
    srand(time(0));
    
    for (int i = 0; i < 15; i++) {
        numeros[i] = rand() % 25;
        cout << numeros[i] << "; ";
    }
}
