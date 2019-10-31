#include "Assinante.h"

Assinante::Assinante(){
    
}

//Utilizando o construtor da superclasse
Assinante::Assinante(string nome, int codigo)  /*: Usuario(nome, codigo)*/{
    this->nome=nome;
    this->codigo=codigo;
    
}

void Assinante::imprimeFavoritos(Midia *favorito){
    
}

void Assinante::inserirFavorito(Midia *favorito){
     favoritos.push_back(favorito);
}

void Assinante::removerFavorito(Midia *favorito){
    
}

void Assinante::imprimeNoArquivo(ofstream &saida){
    saida << this->codigo;
    saida.put(';');
    saida << this->nome << endl;
}

Assinante::~Assinante(){
    
}


