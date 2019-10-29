#ifndef ASSINANTE_H
#define ASSINANTE_H
#include"Usuario.h"
#include<fstream>
#include"Midia.hpp"
#include<string>
using  namespace std;

class Assinante : public Usuario {
public:
    Assinante();
    Assinante(string nome, int codigo);
    void imprimeFavoritos(Midia* favorito);
    void inserirFavorito(Midia* favorito);
    void removerFavorito(Midia* favorito);
    void imprimeNoArquivo(ofstream &saida);
    ~Assinante();
private:

};

#endif /* ASSINANTE_H */

