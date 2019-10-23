#include "Artista.hpp"

Artista::Artista(string nome, int codigo) : Produtor(nome, codigo)  {
    this->nome=nome;
    this->codigo=codigo;
}

string Artista::getNome(){
    return this->nome;
}

Artista::~Artista() {
}

