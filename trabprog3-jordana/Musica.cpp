#include "Musica.hpp"

Musica::Musica(){
    
}

//Adicionei o parametro codigo onde chama Midia pois nao tinha na figura e sem ele o compilador reclamava e nao deixava compilar
Musica::Musica(string nome, Genero* gen, float duracao, int ano) : Midia(nome,codigo, Midia::genero){
    this->duracao=duracao;
    this->anoLancamento=ano;
}

void Musica::imprimeInfoProduto(){
    
}
    
Musica::~Musica(){
    
}
