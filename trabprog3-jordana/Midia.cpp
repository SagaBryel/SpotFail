#include "Midia.hpp"

Midia::Midia() {
}
Midia::Midia(string nome, int codigo, Genero genero) {
    
}

Midia::~Midia() {
}

//Construtor da classe interna
Midia::Genero::Genero(string nome, string sigla){
    this->nome = nome;
    this->sigla = sigla;
}
Midia::Genero::Genero(){
    
}

Midia::Genero::~Genero(){
    
}