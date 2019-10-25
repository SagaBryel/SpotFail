#ifndef PLATAFORMADIGITAL_H
#define PLATAFORMADIGITAL_H
#include<string>
#include"Assinante.h"
#include<vector>
#include"Produtor.hpp"
#include"Midia.hpp"
#include <iostream>
//#include <fstream>
#include <stdlib.h>
#include"Tokenizer.hpp"
#include "NumPunctPTBR.hpp"
#include "NumberUtils.hpp"
#include "Artista.hpp"
#include "Poadcaster.hpp"
#include "Musica.hpp"
#include "Poadcast.hpp"
#include<iterator>
using namespace std;

class PlataformaDigital {
protected:
    string nome;
    
    vector<Assinante> assinantes;
    vector<Poadcaster> poadcasters;
    vector<Artista> artistas;
    
    vector<Midia::Genero> generos;
    
    vector<Musica> musicas;
    vector<Poadcast> poadcasts;
    
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
    void carregaArquivosFavoritos();
    virtual ~PlataformaDigital();
private:

};

#endif /* PLATAFORMADIGITAL_H */

