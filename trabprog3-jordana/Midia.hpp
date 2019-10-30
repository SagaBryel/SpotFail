#ifndef MIDIA_HPP
#define MIDIA_HPP

//#include "PlataformaDigital.h"
#include "Produtor.hpp"
#include"Tokenizer.hpp"
#include "NumPunctPTBR.hpp"
#include "NumberUtils.hpp"
#include<string>
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
    int duracao;
    int anoLancamento;
    vector<Produtor> produtores;
    //Declaracao do atributo genero, uma classe interna
    Genero* genero;
    
    void addProdutores(Produtor p);
public:
    static int qtdprodutos;
    
    Midia();
    Midia(string nome, int codigo, Genero* genero);
    string getNome();
    Genero getGenero();
    //Retorna o codigo (int) de uma midia
    int getCodigo();
    //Função que recebe uma lista de produtores(em forma de string, separados)
    void addListaProdutores(string ps);
//    virtual void imprimeQtdProdutos() = 0;
//    virtual void imprimeProduto() = 0;
    virtual void imprimeNoArquivo(ofstream backup);
    virtual ~Midia();
private:
    
};

#endif /* MIDIA_HPP */

