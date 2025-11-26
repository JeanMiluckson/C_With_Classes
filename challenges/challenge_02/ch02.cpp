//1. Crie uma variavel float para a velocidade de um personagem e inicialize-a com 15.5.
//2. Crie uma variavel bool chamado led_ligado e inicialize-a como false.
//3. Crie uma variavel int para a largura de uma janela e inicialize-a com 800.

#include <iostream>
using namespace std;

int main()
{
    //1) Variavel para velocidade do personagem (ponto flutuante)
    float velocidade = 15.5f;

    //2) Variavel para estado do LED (booleano)
    bool led_ligado = false;

    //3) Variavel para largura da janela (inteiro)
    int largura_janela = 800;

    cout << "--- Dados do Sistema ---" << endl;
    cout << "Velocidade do personagem: " << velocidade << endl;
    cout << "LED ligado: " << led_ligado << endl;
    cout << "Largura da janela: " << largura_janela << endl;


    
    return 0;
}