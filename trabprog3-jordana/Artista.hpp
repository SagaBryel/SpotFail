#ifndef ARTISTA_HPP
#define ARTISTA_HPP
#include"Produtor.hpp"
#include"Album.hpp"
class Artista : public Produtor {
public:
    Artista(string nome, int codigo);
    string getNome();
    ~Artista();
private:
    vector<Album*> albuns;
};

#endif /* ARTISTA_HPP */

