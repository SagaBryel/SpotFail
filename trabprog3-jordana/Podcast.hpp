#ifndef PODCAST_HPP
#define PODCAST_HPP
#include"Midia.hpp"

using namespace std;

class Podcast : public Midia {
protected:
    int qtdTemporadas;
public:
    Podcast();
    Podcast(string nome, int codigo, Genero* gen, int qtdTemp);
    void imprimeInfoProduto();
    string getNome();
    
    //Função de Podcast que dado um arquivo de saida (já aberto) imprime as informações de uma midia do tipo podcast    
    void imprimeNoArquivo(ofstream &backup);
    //Função de Podcast
    void imprimeProduto();
    ~Podcast();
private:

};

#endif /* POADCAST_HPP */

