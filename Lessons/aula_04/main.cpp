#include <iostream>

int main(){
    std::cout <<"Nome do jogador"<< std::endl;
    std:: string nome;
    std:: cin >> nome;

    std::cout <<"Sua Idade"<< std::endl;
    int idade;
    std::cin >> idade;

    std:: cout <<"Olá"<<nome<<", voce tem "<<idade<<" e a sua aventura começa agora!"<< std::endl;
    return 0;
}