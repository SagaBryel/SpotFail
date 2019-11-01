/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Album.cpp
 * Author: 2017101996
 * 
 * Created on 15 de Outubro de 2019, 17:19
 */

#include "Album.hpp"

Album::Album() {
}

Album::Album(string nome, float duracao, int ano, int qtd){
    this->nome = nome;
    this->duracao = duracao;
    this->anoLancamento;
    this->qtdMusicas = 1;
}
    
void Album::addMusica(){
    this->qtdMusicas++;
}

void Album::imprimeNoArquivo(ofstream saida){
    
}
    
Album::~Album(){
    
}

