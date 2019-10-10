#ifndef MIDIA_HPP
#define MIDIA_HPP

//#include "PlataformaDigital.h"

#include<string>

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
        ~Genero();
    };//Fim da classe interna
    
protected:
    string nome;
    int codigo;
    int duracao;
    int anolancamento;
    
    //Declaracao do atributo genero, uma classe interna
    Genero* genero;
    //ssssss
    
public:
    int qtdprodutos;
    
    Midia();
    Midia(string nome, int codigo, Genero genero);
    
    virtual void imprimeQtdProdutos() = 0;
    virtual void imprimeProduto() = 0;
    virtual void imprimeNoArquivo() = 0;
    virtual ~Midia();
private:
    
};

#endif /* MIDIA_HPP */

