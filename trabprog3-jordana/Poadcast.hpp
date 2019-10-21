/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PoadCast.hpp
 * Author: 2017101996
 *
 * Created on 15 de Outubro de 2019, 17:07
 */

#ifndef POADCAST_HPP
#define POADCAST_HPP
#include"Midia.hpp"

using namespace std;

class Poadcast : public Midia {
protected:
    int qtdTemporadas;
public:
    Poadcast();
    Poadcast(string nome, Genero* gen,int qtdTemp);
    void imprimeInfoProduto();
    ~Poadcast();
private:

};

#endif /* POADCAST_HPP */

