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
    
    void imprimeNoArquivo(ofstream backup);
    
    ~Podcast();
private:

};

#endif /* POADCAST_HPP */

