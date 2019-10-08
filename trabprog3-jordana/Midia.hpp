#ifndef MIDIA_HPP
#define MIDIA_HPP

#include "PlataformaDigital.h"

//Classe abstrata
class Midia {
    
    //classe interna
    class Genero {
    private:
        string nome;
        string sigla;
    public:
        Genero();
        Genero(string nome, string sigla);
    };//Fim da classe interna
    
protected:
    string nome;
    int codigo;
    int duracao;
    int anolancamento;
    
    //Declaracao do atributo genero, uma classe interna
    Genero genero;
    
public:
    int qtdprodutos;
    
    Midia();
    Midia(string nome, int codigo);
    
    virtual void imprimeQtdProdutos();
    virtual void imprimeProduto();
    virtual void imprimeNoArquivo();
    virtual ~Midia();
private:
    
};

#endif /* MIDIA_HPP */

