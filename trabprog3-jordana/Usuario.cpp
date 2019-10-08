#include "Usuario.h"

Usuario::Usuario(string nome, int codigo){
    this->nome = nome;
    this codigo = codigo;
}

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

Usuario::Usuario() {
}

Usuario::Usuario(const Usuario& orig) {
}

Usuario::~Usuario() {
}

