#include <iostream>
using namespace std;

int main()
{
    //1. Variavel para idade (Inteiro)
    int idade = 20;
    // Declara um 'int' chamado 'idade' e armazena o valor 30

    //2. Variavel para salario (ponto flutuante de precisao dupla)
    double salario = 5500.75;
    // 'double' e frequentemente usado para valores monetarios ou de alta precisao

    //3. Variavel para um caractere (char)
    char inicial_nome = 'J';
    // Note o uso de aspas simples ('') para um unido 'char'

    //4. Variavel para estado (booleano)
    bool estado_logado = true;
    // Armazena se um usuario esta ou nao logado no sistema

    cout << "Idade: " << idade << endl;
    cout << "Salario: " << salario << endl;
    cout << "Inicial: " << inicial_nome << endl;
    cout << "Logado: " << estado_logado << endl;
    // Quando um bool eh impresso, 'true' aparece como 1 e 'false' como 0

    return 0;
}