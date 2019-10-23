#ifndef ARTISTA_HPP
#define ARTISTA_HPP
#include"Produtor.hpp"

class Artista : public Produtor {
public:
    Artista(string nome, int codigo);
    string getNome();
    ~Artista();
private:

};

#endif /* ARTISTA_HPP */

