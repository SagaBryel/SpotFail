/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PlataformaDigital.h
 * Author: 2017101996
 *
 * Created on 8 de Outubro de 2019, 12:34
 */

#ifndef PLATAFORMADIGITAL_H
#define PLATAFORMADIGITAL_H
#include<string>
#include"Assinante.h"
#include<vector>
#include"Produtor.h"

using namespace std;

class PlataformaDigital {
protected:
    string nome;
public:
    PlataformaDigital();
    PlataformaDigital(string nome);
    void imprimeProdutos(string genero);
    void imprimeAssinantes();
    void inserirAssinante(Assinante* a);
    void removerAssinante(Assinante* a);
    void inserirProduto(/*Midia* novoProduto,*/ vector<Produtor*> produtores);
    virtual ~PlataformaDigital();
private:

};

#endif /* PLATAFORMADIGITAL_H */

