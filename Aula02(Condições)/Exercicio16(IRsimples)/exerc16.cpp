/*FUP que calcule o imposto de renda de um contribuinte. Os dados de entrada são: o CPF(int), o número de dependentes e a renda mensal. Para cada dependente será feito um desconto de 5% do salário mínimo por dependente. Os valores da alíquota para cálculo do imposto são:

| Renda Mensal              | Alíquota |
| ------------------------- | -------- |
| Até 2 salários mínimos    | Isento   |
| 2 < salários mínimos <= 3 | 5%       |
| 3 < salários mínimos <= 5 | 10%      |
| 5 < salários mínimos <= 7 | 15%      |
| Salários mínimos > 7      | 20%      |*/

#include <iostream>
using namespace std;

int cpf, numero_dependentes;
double renda_mensal;
double ir;


int main()
{
    system("chcp 65001");

    cout << "******************************* \n";
    cout << "* Cálculo de Imposto de Renda * \n";
    cout << "******************************* \n";

    cout << "*************************** \n";
    cout << "* Insira o CPF do Titular * \n";
    cout << "*************************** \n";
    cin >> cpf;

    cout << "******************************** \n";
    cout << "* Insira Número de Dependentes * \n";
    cout << "******************************** \n";
    cin >> numero_dependentes;

    cout << "**************************** \n";
    cout << "* Insira Renda Mensal (R$) * \n";
    cout << "**************************** \n";
    cin >> renda_mensal;

    /*Formulas
    Desconto por dependentes > desc = sal_min * (num_dep(5 / 100)) -> 65.1 por dependente
    ir = rend_mens * (5/100)
    */

    double salario_minimo = 1302;
    double desconto_por_numero_dependentes = 65.1;
    double ir_desconto_dependentes;

    if ( renda_mensal < ( 2 * salario_minimo ) )
    {
        cout << "\t********** \n";
        cout << "\t* Isento * \n";
        cout << "\t********** \n";
    } else if ( renda_mensal > ( 2 * salario_minimo ) || renda_mensal <= ( 3 * salario_minimo ) )
    {
        ir = renda_mensal * ( 0.05 );
        ir_desconto_dependentes = (ir) - ( numero_dependentes * (desconto_por_numero_dependentes));
        cout << "\t**************************** \n";
        cout << "\t* Valor a pagar: " << ir_desconto_dependentes << " *\n";
        cout << "\t**************************** \n";
    } else if ( renda_mensal > ( 3 * salario_minimo ) && renda_mensal <= ( 5 * salario_minimo ) )
    {
        ir = (renda_mensal * ( 0.1 ));
        ir_desconto_dependentes = (ir) - ( numero_dependentes * (desconto_por_numero_dependentes));
        cout << "\t**************************** \n";
        cout << "\t* Valor a pagar: " << ir_desconto_dependentes << " *\n";
        cout << "\t**************************** \n";
    } else if ( renda_mensal > ( 5 * salario_minimo ) && renda_mensal <= ( 7 * salario_minimo ) )
    {
        ir = (renda_mensal * ( 0.15 ));
        ir_desconto_dependentes = (ir) - ( numero_dependentes * (desconto_por_numero_dependentes));
        cout << "\t**************************** \n";
        cout << "\t* Valor a pagar: " << ir_desconto_dependentes << " *\n";
        cout << "\t**************************** \n";
    } else if ( renda_mensal > ( 7 * salario_minimo ) )
    {
        ir = (renda_mensal * ( 0.20 ));
        ir_desconto_dependentes = (ir) - ( numero_dependentes * (desconto_por_numero_dependentes));
        cout << "\t********************** \n";
        cout << "\t* Valor a pagar: " << ir_desconto_dependentes << " *\n";
        cout << "\t********************** \n";
    }
}