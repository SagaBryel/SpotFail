#ifndef PLATAFORMADIGITAL_H
#define PLATAFORMADIGITAL_H
#include<string>
#include"Assinante.h"
//#include<vector>
#include"Produtor.hpp"
#include"Midia.hpp"
#include <iostream>
//#include <fstream>
#include <stdlib.h>
#include"Tokenizer.hpp"
#include "NumPunctPTBR.hpp"
#include "NumberUtils.hpp"
#include "StringUtils.hpp"
#include "Artista.hpp"
#include "Podcaster.hpp"
#include "Musica.hpp"
#include "Podcast.hpp"
#include <cstdio>
#include <cstdlib>
#include<iterator>
#include <typeinfo>
using namespace std;

class PlataformaDigital {
protected:
    string nome;
    
    vector<Assinante*> assinantes;
    
    vector<Produtor*> produtores;
    
    vector<Midia::Genero> generos;
    
    vector<Midia*> midias;
    
    
public:
    PlataformaDigital();
    PlataformaDigital(string nome);
    void imprimeProdutos(string genero);
    void imprimeAssinantes();
    void inserirAssinante(Assinante* a);
    void removerAssinante(Assinante* a);
    void inserirProduto(Midia* novoProduto, vector<Produtor*> produtores);
    void imprimeNoArquivo(ofstream saida);
    void carregaArquivoUsuarios(ifstream &entrada);
    void carregaArquivoGeneros(ifstream &entrada);
    void carregaArquivosMidias(ifstream &entrada);
    void exportarBiblioteca();
    void gerarRelatorios();
    void carregaArquivosFavoritos(ifstream &entrada);
    virtual ~PlataformaDigital();
private:
    //função auxiliar de "gerarRelatorios"
    void gerarHellatorioBackup();
    void gerarHellatorioProdutores();
    void gerarHellatorioFavoritos();
};

#endif /* PLATAFORMADIGITAL_H */

