/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Album.hpp
 * Author: 2017101996
 *
 * Created on 15 de Outubro de 2019, 17:19
 */

#ifndef ALBUM_HPP
#define ALBUM_HPP
#include<string>
#include<fstream>

using namespace std;

class Album {
protected:
    string nome;
    float duracao;
    int anoLancamento;
    int qtdMusicas;
public:
    Album();
    Album(string nome, float duracao, int ano, int qtd);
    void imprimeNoArquivo(ofstream saida);
    ~Album();
private:

};

#endif /* ALBUM_HPP */

