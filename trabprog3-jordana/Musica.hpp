#ifndef MUSICA_HPP
#define MUSICA_HPP
#include"Midia.hpp"

class Musica : public Midia {
public:
    Musica();
    Musica(string nome, Genero* gen, float duracao, int ano);
    void imprimeInfoProduto();
    ~Musica();
private:

};

#endif /* MUSICA_HPP */

