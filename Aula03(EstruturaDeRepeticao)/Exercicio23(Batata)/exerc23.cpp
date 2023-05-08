/*FUP que solicite um numero e escreva "Batata" enquanto o usuario digita 1;*/

#include <iostream>
using namespace std;

int main() 
{
    system("chcp 65001");
    
    int num;

    cout << "Insira um Número: ";
    cin >> num;

    while (num == 1) {
        cout << "Batata" << endl;
        cout << "Insira um Número: ";
        cin >> num;
    }
    return 0;
}