/*Exercícios 6 9 19 24 28*/

#include <iostream>
using namespace std;
//Variáveis
//Exercício 06.
int segundos, minutos, horas;
//Exercício 09.
double nota1, nota2, nota3, media;
//Exercício 19.
double capitalInicial, capitalFinal;
float taxaJuros;
int dias;
//Exercício 24.
int num;
//Exercício 28.
int numeros[11], contadorNeg = 0;
int op;

main() {
	system("chcp 65001");
	do{
		cout<<"\n \t Escolha uma opção a seguir: \n";
		cout<<"\n [1] Exercício 1";
		cout<<"\n [2] Exercício 2";
		cout<<"\n [3] Exercício 3";
		cout<<"\n [4] Exercício 4";
		cout<<"\n [5] Exercício 5";
		cout<<"\n [6] Use a sua criatividade";
		cout<<"\n [7] Encerrar \n";
		cin>>op;

		switch(op) {
			case 1: {
                system("chcp 65001");

                cout << "\t***********************************************\n";
                cout << "\t* Conversor de Segundos para Horas e Minutos  *\n";
                cout << "\t***********************************************\n\n";

                cout << "- Insira o Valor em Segundos: ";
                cin >> segundos;

                horas = segundos / 3600;
                segundos %= 3600; //Usa o resto.
                minutos = segundos / 60;
                segundos %= 60; //Usa o resto. 
                
                cout << "\n\t- Duração: \n";
                cout << "\t - " << horas << " Hora(s)\n";
                cout << "\t - " << minutos << " Minuto(s)\n";
                cout << "\t - " << segundos << " segundo(s)\n";
				break;
			};
			case 2: {
                cout << "\t****************************\n";
                cout << "\t* Média Aritmética Simples *\n";
                cout << "\t****************************\n\n";

                cout << "- Insira a 1ª Nota: ";
                cin >> nota1;

                cout << "- Insira a 2ª Nota: ";
                cin >> nota2;

                cout << "- Insira a 3ª Nota: ";
                cin >> nota3;

                media = (nota1 + nota2 + nota3) / 3;    

                if (media >= 7)
                {
                    cout << "\n\tMédia Final: " << media << " * Aprovado *\n";
                } else if (media >= 5)
                {
                    cout << "\n\tMédia Final: " << media << " * Recuperação *\n";
                } else if (media < 5)
                {
                    cout << "\n\tMédia Final: " << media << " * Reprovado *\n";
                }
				break;
			};
			case 3: {
                cout << "\t************************ \n";
                cout << "\t* Rendimento de Capital *\n";
                cout << "\t************************ \n";
                
                cout << "- Insira o Capital Inicial ";
                cin >> capitalInicial;                                
                
                cout << "- Insira a Taxa dos Juros em Decimais ";
                cin >> taxaJuros;                
                
                cout << "- Insira o Tempo do Investimento em Dias ";
                cin >> dias;
                                
                capitalFinal = ((capitalInicial * taxaJuros) * (dias)) + (capitalInicial);
                
                cout << "\n\t********************************* \n";
                cout << "\t* Insira o Capital Final " << capitalFinal << " *\n";
                cout << "\t********************************* \n";
				break;
			};
			case 4: {
                cout << "\n\t***********\n";
                cout << "\t* Tabuada *\n";
                cout << "\t***********\n";
                
                cout << "\n- Insira o Número que Deseja a Tabuada: ";
                cin >> num;
                cout << "\n";

                for (int i = 1; i <= 10; i++)
                {
                    int multip = num * i;

                    cout << num << " X " << i << " = " << multip << "\n";
                }
				break;
			};
			case 5: {
                cout << "\n\t*******************************\n";
                cout << "\t* Verifica caso seja Negativo *\n";
                cout << "\t*******************************\n\n";

                for (int i = 1; i <= 10; i++)
                {
                    cout << "- Insira o " << i << "º Número: ";
                    cin >> numeros[i];
                    if (numeros[i] < 0)
                    {
                        contadorNeg++;
                    } 
                }
                cout << "\n\t- Quantidade de Números Negativos: " << contadorNeg << "\n";
				break;
			};
			case 6: {
				cout<<"Sendo criativo";
				break;
			};
			case 7: {
				cout<<"Finalizando";
				break;
			};
			default: {
				cout<<"\nOpção inválida";
				break;
			}
		}
	} while(op != 7);
	cout<<"\n\n\n\n\n - Até mais \n\n\n\n\n";
}