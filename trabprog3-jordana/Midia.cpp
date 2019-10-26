#include "Midia.hpp"

int Midia::qtdprodutos = 0;

Midia::Midia() {
}
Midia::Midia(string nome, int codigo, Genero* genero) {
    this->nome = nome;
    this->codigo = codigo;
    this->genero = genero;
    qtdprodutos++;
}

Midia::~Midia() {
}

//Construtor da classe interna
Midia::Genero::Genero(string nome, string sigla){
    this->nome = nome;
    this->sigla = sigla;
}

string Midia::Genero::getNome(){
    return this->nome;
}
        
string Midia::Genero::getSigla(){
    return sigla;
}

string Midia::getNome(){
    return this->nome;
}

Midia::Genero::Genero(){
    
}

Midia::Genero Midia::getGenero(){
    return *genero;
}

Midia::Genero::~Genero(){
    
}