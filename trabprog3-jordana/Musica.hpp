#ifndef MUSICA_HPP
#define MUSICA_HPP
#include"Midia.hpp"

class Musica : public Midia {
private:
    string album;
    int codalbum;
public:
    Musica();
    Musica(string nome,int codigo, Genero* gen, float duracao, int ano, string album, int codalbum);
    string getNome();
    void imprimeInfoProduto();
    ~Musica();
    
    
    //Função de Musica que dado um arquivo de saida (já aberto) imprime as informações de uma midia do tipo musica
    void imprimeNoArquivo(ofstream &backup);
    //Função de Musica
    void imprimeProduto();
    
};

#endif /* MUSICA_HPP */

