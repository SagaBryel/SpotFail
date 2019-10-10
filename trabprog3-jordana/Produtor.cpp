#include "Produtor.hpp"

using namespace std;

Produtor::Produtor() {
}

//Utilizando o construtor da superclasse???
Produtor::Produtor(string nome, int codigo) /*: Usuario(nome, codigo)*/{
    this->nome=nome;
    this->codigo=codigo;
}

Produtor::~Produtor() {
}

void Produtor::imprimeProdutosDesenvolvidos(){
     
}
 
void Produtor::imprimeNoArquivo(/*&outfile : ofstream*/){
     
}