/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Produtor.hpp
 * Author: 2017101996
 *
 * Created on 1 de Outubro de 2019, 14:28
 */

#ifndef PRODUTOR_HPP
#define PRODUTOR_HPP
#include "Usuario.h"
#include<vector>

using namespace std;

class Produtor : public Usuario{
public:
    Produtor();
    Produtor(string nome, int codigo);
    void criarProduto();
    void imprimeProdutosDesenvolvidos();
    //vector </*Midia*/> getProdutosDesenvolvidos();
    virtual ~Produtor();
    void imprimeNoArquivo(/*&outfile : ofstream*/);
    void carregaArquivo(/*&infile  : ifstream*/);
private:

};

#endif /* PRODUTOR_HPP */

