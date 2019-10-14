/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Poadcaster.hpp
 * Author: 2017101996
 *
 * Created on 14 de Outubro de 2019, 19:31
 */

#ifndef POADCASTER_HPP
#define POADCASTER_HPP

#include"Produtor.hpp"

using namespace std;

class Poadcaster : public Produtor {
public:
    Poadcaster(string nome, int codigo);
//    void imprimeNoArquivo(ofstream saida);
    ~Poadcaster();
private:

};

#endif /* POADCASTER_HPP */

