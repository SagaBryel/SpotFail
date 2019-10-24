#include "Usuario.h"
using namespace std;
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

void Usuario::imprimeNoArquivo(ofstream saida){
    
}

void Usuario::printaUsuario(){
    //cout << nome << endl;
//    printf("%s; %d\n", nome.c_str(), codigo);
    
    
    cout << codigo << ";";
    cout << nome << endl;
    cout << endl;
}

Usuario::~Usuario() {
}

