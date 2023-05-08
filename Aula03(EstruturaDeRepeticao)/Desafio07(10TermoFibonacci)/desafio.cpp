/*FUP que imprima fibonacci até o 10º termo;*/

#include <iostream>
using namespace std;

int main() 
{
    system("chcp 65001");

    int n = 10;
    int a = 0, b = 1;

    for (int i = 0; i < n; i++) {
        cout << a << "; ";

        int temp = a + b;
        a = b;
        b = temp;
    }
}