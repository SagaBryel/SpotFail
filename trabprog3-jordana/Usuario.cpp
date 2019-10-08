/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Usuario.cpp
 * Author: 2017101996
 * 
 * Created on 1 de Outubro de 2019, 09:54
 */

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

