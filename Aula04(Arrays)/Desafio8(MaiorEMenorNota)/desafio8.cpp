#include <iostream>
using namespace std;

int main() {
    int notas[10];
    int maiorNota = 0;
    int menorNota = 100;
    int somaNotas = 0;
    
    for (int i = 0; i < 10; i++) {
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        if (notas[i] > maiorNota) {
            maiorNota = notas[i];
        }
        if (notas[i] < menorNota) {
            menorNota = notas[i];
        }
        somaNotas += notas[i];
    }
    
    cout << "Maior nota: " << maiorNota << endl;
    cout << "Menor nota: " << menorNota << endl;
    cout << "Média das notas: " << (double)somaNotas / 10 << endl;
    
    cout << "Alunos com a maior nota: ";
    for (int i = 0; i < 10; i++) {
        if (notas[i] == maiorNota) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
    
    cout << "Alunos com a menor nota: ";
    for (int i = 0; i < 10; i++) {
        if (notas[i] == menorNota) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
    
    return 0;
}