#ifndef MUSICA_HPP
#define MUSICA_HPP
#include"Midia.hpp"

class Musica : public Midia {
public:
    Musica();
    Musica(string nome,int codigo, Genero* gen, float duracao, int ano);
    string getNome();
    void imprimeInfoProduto();
    ~Musica();
    
    
    //Função de Musica que dado um arquivo de saida (já aberto) imprime as informações de uma midia do tipo musica
    void imprimeNoArquivo(ofstream &backup);
    //Função de Musica
    void imprimeProduto();
private:

};

#endif /* MUSICA_HPP */

