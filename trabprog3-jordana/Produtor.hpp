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

