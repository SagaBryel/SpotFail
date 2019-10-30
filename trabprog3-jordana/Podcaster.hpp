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

#ifndef PODCASTER_HPP
#define PODCASTER_HPP

#include"Produtor.hpp"

using namespace std;

class Podcaster : public Produtor {
public:
    Podcaster(string nome, int codigo);
    string getNome();
    //void imprimeNoArquivo(ofstream &backup);
    ~Podcaster();
private:

};

#endif /* PODCASTER_HPP */

