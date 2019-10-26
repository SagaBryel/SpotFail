/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Poadcaster.cpp
 * Author: 2017101996
 * 
 * Created on 14 de Outubro de 2019, 19:32
 */

#include "Podcaster.hpp"

Podcaster::Podcaster(string nome, int codigo) : Produtor(nome,codigo){
    this->nome;
    this->codigo;
}   

string Podcaster::getNome(){
    return this->nome;
}

Podcaster::~Podcaster(){
}

