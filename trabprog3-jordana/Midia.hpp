#ifndef MIDIA_HPP
#define MIDIA_HPP

//#include "PlataformaDigital.h"
#include "Produtor.hpp"
#include"Tokenizer.hpp"
#include "NumPunctPTBR.hpp"
#include "NumberUtils.hpp"
#include<string>
#include<vector>
#include<iostream>

using namespace std;

//Classe abstrata
class Midia {
public:
    //classe interna
    class Genero {
    private:
        string nome;
        string sigla;
    public:
        Genero();
        Genero(string nome, string sigla);
        string getNome();
        string getSigla();
        ~Genero();
    };//Fim da classe interna
    
protected:
    string nome;
    int codigo;
    float duracao;
    int anoLancamento;
    vector<Produtor*> produtores;
    //Declaracao do atributo genero, uma classe interna
    Genero* genero;
    
    void addProdutores(Produtor *p);
public:
    static int qtdprodutos;
    
    Midia();
    Midia(string nome, int codigo, Genero* genero);
    
    //Função de Midia, retorna o nome da midia.
    string getNome();
    void setQtdProdutos(vector<Midia*> midias);
    int getQtdProdutos();
    Genero getGenero();
    //Retorna o codigo (int) de uma midia
    int getCodigo();
    
    //Função que recebe uma lista de produtores(em forma de string, separados)
    void addListaProdutores(string ps, vector<Produtor*> prodsplataforma);
    
    
    virtual void imprimeProduto() = 0;
    virtual void imprimeNoArquivo(ofstream &backup) = 0;

    void imprimeQtdProdutos();

    //void imprimeNoArquivo(ofstream &backup);
    
    virtual ~Midia();
private:
    
};

#endif /* MIDIA_HPP */

