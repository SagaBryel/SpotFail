/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PodCast.cpp
 * Author: 2017101996
 * 
 * Created on 15 de Outubro de 2019, 17:07
 */

#include "Podcast.hpp"

Podcast::Podcast(){
    
}
    
Podcast::Podcast(string nome, int codigo, Genero* gen, int qtdTemp) : Midia(nome, codigo, gen){
    this->qtdTemporadas=qtdTemp;
}

string Podcast::getNome(){
    return this->nome;
}

void Podcast::imprimeInfoProduto(){
    
}

Podcast::~Podcast(){
    
}

