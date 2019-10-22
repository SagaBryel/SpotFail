#ifndef POADCAST_HPP
#define POADCAST_HPP
#include"Midia.hpp"

using namespace std;

class Poadcast : public Midia {
protected:
    int qtdTemporadas;
public:
    Poadcast();
    Poadcast(string nome, Genero* gen,int qtdTemp);
    void imprimeInfoProduto();
    ~Poadcast();
private:

};

#endif /* POADCAST_HPP */

