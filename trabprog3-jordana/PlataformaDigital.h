#ifndef PLATAFORMADIGITAL_H
#define PLATAFORMADIGITAL_H
#include<string>
#include"Assinante.h"
#include<vector>
#include"Produtor.hpp"
#include"Midia.hpp"

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
    void inserirProduto(Midia* novoProduto, vector<Produtor*> produtores);
    void imprimeNoArquivo();
    void carregaArquivoUsuarios();
    void carregaArquivoGeneros();
    void carregaArquivosMidias();
    void exportarBiblioteca();
    void gerarRelatorios();
    void carregaArquivosFavoritos();
    virtual ~PlataformaDigital();
private:

};

#endif /* PLATAFORMADIGITAL_H */

