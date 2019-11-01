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
    
Podcast::Podcast(string nome,int codigo, Genero* gen, float duracao, int ano, int qtdtemp) : Midia(nome, codigo, gen){
    this->qtdTemporadas=qtdtemp;
    this->anoLancamento=ano;
    this->duracao=duracao;
}

string Podcast::getNome(){
    return this->nome;
}

void Podcast::imprimeInfoProduto(){
    
}

void Podcast::imprimeNoArquivo(ofstream &backup){
    backup << this->nome << ";P;";
    vector<Produtor*>::iterator iteProd;
    
    for(iteProd = this->produtores.begin(); iteProd < this->produtores.end(); iteProd++){
        backup << (*iteProd.base())->getCodigo();
        if(iteProd < (this->produtores.end()-1)){
            backup << ",";
        }       
    }
    backup << ';' << this->duracao << ';' << this->genero->getSigla() << ';' << this->qtdTemporadas;
    //Como um podcast nao tem album, nem codigo de album
    backup << ";;;" << this->anoLancamento;
    backup << endl;
}
void Podcast::imprimeProduto(){
    
}
    

Podcast::~Podcast(){
    
}

