/*FUP que leia 10 números e verifique quantos destes números
são negativos*/
/*FUP altere o programa anterior para imprimir:
- A quantidade de números positivos;
- A quantidade de pares;
- A quantidade de números múltiplos de 7*/

#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    int num, qtdposi = 0, qtdpar = 0, qtdMult7 = 0;

    cout << "\n *****************************************************\n";
	cout << "\n * Verifica caso seja Positivo, Par ou Multiplo de 7 *\n";
	cout << "\n *****************************************************\n";
    cout << "\n";

	for (int i = 1; i <= 10; i++) {
		cout << "Insira o " << i << "º Número: ";
		cin >> num;
		
		if (num > 0 ){
			qtdposi++;
			
		} 
		if ((num % 2) == 0){
			qtdpar++;
		}
		if ((num % 7 ) == 0){  
			qtdMult7++;
		}		
	}
    cout << "\n\tQuatidade de Números: \n";
	cout << "\t\t- Positivos: " << qtdposi << "\n";
	cout << "\t\t- Pares: " << qtdpar << "\n";
	cout << "\t\t- Multiplo de 7: " << qtdMult7 << "\n";
}