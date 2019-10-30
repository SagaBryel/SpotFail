#include "Musica.hpp"

Musica::Musica(){
    
}

//Adicionei o parametro codigo onde chama Midia pois nao tinha na figura e sem ele o compilador reclamava e nao deixava compilar
Musica::Musica(string nome,int codigo, Genero* gen, float duracao, int ano) : Midia(nome,codigo, gen){
    this->duracao=duracao;
    this->anoLancamento=ano;
    this->duracao=duracao;
}

void Musica::imprimeInfoProduto(){
    
}

string Musica::getNome(){
    return this->nome;
}
void Musica::imprimeNoArquivo(ofstream backup) {
    cout << "AAAAAAAAAAAA";
} 
Musica::~Musica(){
    
}
