#ifndef PRODUTOR_HPP
#define PRODUTOR_HPP
#include "Usuario.h"
#include<fstream>
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
//    void imprimeNoArquivo(ofstream saida);
private:

};

#endif /* PRODUTOR_HPP */

