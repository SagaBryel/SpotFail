/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Assinante.h
 * Author: 2017101996
 *
 * Created on 8 de Outubro de 2019, 12:07
 */

#ifndef ASSINANTE_H
#define ASSINANTE_H
#include"Usuario.h"
#include<string>


class Assinante: public Usuario {
public:
    Assinante();
    Assinante(string nome, int codigo);
    void imprimeFavoritos(/*Midia favorito*/);
    void inserirFavorito(/*Midia favorito*/);
    void removerFavorito(/*Midia favorito*/);
    void imprimeNoArquivo(/*&outfile : ofstream*/);
    virtual ~Assinante();
private:

};

#endif /* ASSINANTE_H */

