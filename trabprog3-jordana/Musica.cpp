#include "Musica.hpp"

Musica::Musica(){
    
}

//Adicionei o parametro codigo onde chama Midia pois nao tinha na figura e sem ele o compilador reclamava e nao deixava compilar
Musica::Musica(string nome,int codigo, Genero* gen, float duracao, int ano, string album, int codalbum) : Midia(nome,codigo, gen){
    this->anoLancamento=ano;
    this->duracao=duracao;
    this->codalbum = codalbum;
}

void Musica::imprimeInfoProduto(){
    
}

string Musica::getNome(){
    return this->nome;
}
void Musica::imprimeNoArquivo(ofstream &backup) {
    backup << this->nome << ";M;";
    vector<Produtor*>::iterator iteProd;
    //imprimiir os produtores
    for(iteProd = this->produtores.begin(); iteProd < this->produtores.end(); iteProd++){
        backup << (*iteProd.base())->getCodigo();
        if(iteProd < (this->produtores.end()-1)){
            backup << ",";
        }      
    }
    backup << ';' << this->duracao << ';' << this->genero->getSigla();
    backup << ";;" << this->codalbum << ';' << this->anoLancamento;
    backup << endl;
    
}

void Musica::imprimeProduto(){
    
}

Musica::~Musica(){
    
}
