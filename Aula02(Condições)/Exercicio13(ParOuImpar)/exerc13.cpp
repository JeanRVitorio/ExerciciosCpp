/*FUP que solicite um numero e veja se ele é par ou impar;
    Dica: Pares ou Ímpares? Utilize:
        C++
        if (num%2==0)
            cout<<"\n " << num<< " é Par";
        else
            cout<<"\n " << num<< " é Ímpar";*/

#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001");

    int numero;

    cout << "\t****************\n";
    cout << "\t* Par ou Ímpar *\n"; 
    cout << "\t****************\n\n";

    cout << "Insira o Número: ";
    cin >> numero;

    if (numero % 2 == 0)
    {
        cout<<"\t\n " << "\t" << numero << " é Par";
    } else 
    {
        cout<<"\n " << "\t" << numero << " é Ímpar";
    }    
}
