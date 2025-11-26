// Declare duas variaveis do tipo int: fps_cena_1 e fps_cena_2.
// Use cin para pedir ao usuario que digite os valores de FPS para ambas as cenas.
// Calcule a media dessas duas cenas e armazene o resultado em uma variavel chamada media_fps do tipo float, garantindo que o resultado da divisao seja preciso.
// Imprima a media final


#include <iostream>
using namespace std;

int main()
{
    int fps_cena_1, fps_cena_2;
    float media_fps;

    cout << "Digite o valor de FPS para a cena 1: ";
    cin >> fps_cena_1;

    cout << "Digite o valor de FPS para a cena 2: ";
    cin >> fps_cena_2;

    media_fps = (float)(fps_cena_1 + fps_cena_2) / 2.0f;

    cout << "A media de FPS das duas cenas e: " << media_fps << endl;


}