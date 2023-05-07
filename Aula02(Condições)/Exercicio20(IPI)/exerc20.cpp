/* FUP que leia:
• a percentagem do IPI a ser acrescido no valor das peças
• o código da peça 1, valor unitário da peça 1, quantidade de peças 1
• o código da peça 2, valor unitário da peça 2, quantidade de peças 2
O algoritmo deve calcular o valor total a ser pago e apresentar o resultado.
Fórmula : ValorTotal = (valor1*quant1 + valor2*quant2)*(IPI/100 + 1)
*/

#include <iostream>
using namespace std;

int main() 
{
	system ("chcp 65001");

    int codigo1, codigo2, quant1, quant2;

    float valor1, valor2;

    double valorTotal, IPI;
	
	cout << "\t******************\n";
	cout << "\t* Calculo de IPI *\n";
	cout << "\t******************\n";
	
	cout << "Insira o Valor do IPI em Decimais: ";
    cin >> IPI;

    cout << "Insira o Código da 1ª peça: ";
    cin >> codigo1;

    cout << "Insira o Valor da 1ª peça: ";
    cin >> valor1;

    cout << "Insira o Quantidade da 1ª peça: ";
    cin >> quant1;

    cout << "Insira o Código da 2ª peça: ";
    cin >> codigo2;

    cout << "Insira o Valor da 2ª peça: ";
    cin >> valor2;

    cout << "Insira o Quantidade da 2ª peça: ";
    cin >> quant2;

	valorTotal = ((valor1 * quant1) + (valor2 * quant2)) * ((IPI) + 1 );
		
	cout << "\t**************************************\n";
	cout << "\tCódigo das Peças Relacionadas " << codigo1 << ", "<< codigo2 << " \n";
	cout << "\t* Valor com IPI é " << valorTotal << " *\n";
	cout << "\t**************************************\n";
}