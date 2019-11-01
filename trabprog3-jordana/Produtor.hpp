#ifndef PRODUTOR_HPP
#define PRODUTOR_HPP
#include "Usuario.h"
#include<fstream>
#include<vector>
#include<algorithm>
//#include "Midia.hpp"

using namespace std;

//Forward declaration
class Midia;

class Produtor : public Usuario{
private:
    vector<Midia*> midiasproduzidas;
    
public:
    Produtor();
    Produtor(string nome, int codigo);
    void criarProduto();
    void imprimeProdutosDesenvolvidos();
    vector <Midia*> getProdutosDesenvolvidos();
    virtual ~Produtor();
    void imprimeNoArquivo(ofstream &saida);
    void addMidia(Midia* m);
    void ordenaMidia();
    
    //Sobrescrita do operador para usar em sort
    bool operator <(Produtor* p);//acabei nao conseguindo usar
    bool operator >(Produtor* p);//acabei nao conseguindo usar
    
};

#endif /* PRODUTOR_HPP */

