/*FUP que imprima a tabuada de um numero de 0 a 10*/

#include <iostream>
using namespace std;

int main() 
{
	system ("chcp 65001");

    int num;
	
	cout << "\n ********** \n";
	cout << "\n * Tabuada *\n";
	cout << "\n ********** \n";
	
	cout << "\nInsira o Número que Deseja a Tabuada: ";
	cin >> num;
    cout << "\n";

    for (int i = 1; i <= 10; i++)
    {
        int multip = num * i;

        cout << i << " X " << num << " = " << multip << "\n";
    }   
}