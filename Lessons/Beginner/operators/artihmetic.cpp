#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Digite o valor de a: ";
    cin >> a;

    cout << "Digite o valor de b: " << endl;
    cin >> b;

    // Adição
    c = a + b;
    cout << "adicao: " << c << endl;

    // Subtração
    c = a - b;
    cout << "subtracao: " << c << endl;

    //Multiplicação
    c = a * b;
    cout << "multiplicacao: " << c << endl;

    // Divisão
    c = a / b;
    cout << "divisao: " << c << endl;

    // Resto da divisão
    c = a % b;
    cout << "resto da divisao: " << c << endl;


    return 0;
}