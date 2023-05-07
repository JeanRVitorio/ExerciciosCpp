/*FUP que leia as 3 notas de um aluno e calcule a média final deste aluno. Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente. - media ponderada*/

#include <iostream>
using namespace std;

int main() 
{
	system ("chcp 65001");

    float valor1;
    float valor2;
    float valor3;

    int peso1 = 2;
    int peso2 = 3;
    int peso3 = 5;

    float media_ponderada;
	
	cout << "*******************\n";
	cout << "* Média Ponderada *\n";
	cout << "*******************\n";
	
	cout << "*************************\n";
	cout << "Insira a Primeira Nota ";
    cin >> valor1;
	cout << "*************************\n";	
	
	cout << "************************\n";
	cout << "Insira a Segunda Nota ";
    cin >> valor2;
	cout << "************************\n";
		
	cout << "*************************\n";
	cout << "Insira a Terceira Nota ";
    cin >> valor3;
	cout << "*************************\n";	
	
	media_ponderada = ((valor1 * peso1) + (valor2 * peso2) + (valor3 * peso3)) / (peso1 + peso2 + peso3);
	
	cout << "**************\n";
	cout << "* Média é " << media_ponderada << " *\n";
	cout << "**************\n";
	
}