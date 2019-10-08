#include "Midia.hpp"

Midia::Midia() {
}

Midia::Midia(const Midia& orig) {
}

Midia::~Midia() {
}

//Construtor da classe interna
Midia::Genero::Genero(string nome, string sigla){
    this->nome = nome;
    this->sigla = sigla;
}
