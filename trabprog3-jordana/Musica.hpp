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
private:

};

#endif /* MUSICA_HPP */

