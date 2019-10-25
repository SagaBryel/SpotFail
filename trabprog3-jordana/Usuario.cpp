#include "Usuario.h"

//Usuario::Usuario(string nome, int codigo){
//    this->nome = nome;
//    this codigo = codigo;
//}

//Usuario::Usuario() {
//}

Usuario::Usuario(){
    
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

void imprimeNoArquivo(ofstream saida){
    
}    

Usuario::~Usuario() {
}

