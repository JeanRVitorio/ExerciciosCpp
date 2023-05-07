/*FUP para uma Investigação Criminal. Faça 8 perguntas para uma pessoa sobre um crime. As
perguntas são:
" Trocou mensagens com a vítima? "
" Esteve no local do crime? "
" É parente ou reside perto da vítima? "
" Devia algum valor para a vítima? "
" Trabalha ou trabalhou com a vítima? "
" Possui algum tipo de relacionamento amoroso com a vítima? "
" Ficou feliz pelo destino fatídico na vítima? "
" Possui algum tipo de arma de fogo? "
Após, deve ser realizado uma análise das respostas e no final emitir uma classificação sobre a
participação da pessoa no crime. Se a pessoa responder:
- Positivo para 4 perguntas, a pessoa deve ser classificada como: "Suspeito do Crime"
- Positivo para entre 5 e 7 perguntas, a pessoa deve ser classificada como "Possível Criminoso"
- Positivo para 8 perguntas, a pessoa deve ser classificada como: "Assassino"
- Caso contrário, a pessoa deverá ser classificado como: "Inocente"*/

#include <iostream>
using namespace std;

int resposta1, resposta2, resposta3, resposta4, resposta5, resposta6, resposta7, resposta8;
int soma;

int main() {
	system ("chcp 65001");
	
	cout << "************ \n";
	cout << "* Suspeitos *\n";
	cout << "************ \n";
	
	cout << "**********************************************************\n";
	cout << "Trocou mensagens com a vítima? [1] Positivo [0] Negativo ";
    cin >> resposta1;
	cout << "**********************************************************\n";
	
	cout << "*****************************************************\n";
	cout << "Esteve no local do crime? [1] Positivo [0] Negativo ";
    cin >> resposta2;
	cout << "*****************************************************\n";
	
	cout << "****************************************************************\n";
	cout << "É parente ou reside perto da vítima? [1] Positivo [0] Negativo ";
    cin >> resposta3;
	cout << "****************************************************************\n";
	
	cout << "************************************************************\n";
	cout << "Devia algum valor para a vítima? [1] Positivo [0] Negativo ";
    cin >> resposta4;
	cout << "************************************************************\n";
	
	cout << "***************************************************************\n";
	cout << "Trabalha ou trabalhou com a vítima? [1] Positivo [0] Negativo ";
    cin >> resposta5;
	cout << "***************************************************************\n";	
	
	cout << "*************************************************************************************\n";
	cout << "Possui algum tipo de relacionamento amoroso com a vítima? [1] Positivo [0] Negativo ";
    cin >> resposta6;
	cout << "*************************************************************************************\n";	
	
	cout << "************************************************************************\n";
	cout << "Ficou feliz pelo destino fatídico na vítima? [1] Positivo [0] Negativo ";
    cin >> resposta7;
	cout << "************************************************************************\n";
	
	cout << "**************************************************************\n";
	cout << "Possui algum tipo de arma de fogo? [1] Positivo [0] Negativo ";
    cin >> resposta8;
	cout << "**************************************************************\n";
	
	soma = (resposta1 + resposta2 + resposta3 + resposta4 + resposta5 + resposta6 + resposta7 + resposta8);
	
	if ( soma < 3 ){
		cout << "******************\n";
		cout << "* Não é suspeito *\n";
		cout << "******************\n";
	} else if ( soma >= 4 ) {
		cout << "*********************\n";
		cout << "* Suspeito do Crime *\n";
		cout << "*********************\n";
	} else if ( soma >= 5 && soma <= 7 ) {
		cout << "**********************\n";
		cout << "* Possível Criminoso *\n";
		cout << "**********************\n";
	} else if ( soma == 8) {
		cout << "************\n";
		cout << "* Assasino *\n"; 
		cout << "************\n";
	}
}