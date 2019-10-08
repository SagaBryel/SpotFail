#include "Usuario.h"

string Usuario::getNome(){
    return nome;
}

int Usuario::getCodigo(){
    return codigo;
}

void Usuario::setCodigo(int codigo){
    this->codigo=codigo;
}

void Usuario::setNome(string nome){
    this->nome=nome;
}

void imprimeNoArquivo(){
    
}
    
void carregaArquivo(){
    
}    

Usuario::Usuario() {
}

Usuario::Usuario(const Usuario& orig) {
}

Usuario::~Usuario() {
}

