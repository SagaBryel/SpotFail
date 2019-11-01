#ifndef ALBUM_HPP
#define ALBUM_HPP
#include<string>
#include<fstream>

using namespace std;

class Album {
protected:
    int codigo;
    string nome;
    float duracao;
    int anoLancamento;
    int qtdMusicas;
public:
    Album();
    Album(string nome, float duracao, int ano, int qtd);
    void addMusica();
    void imprimeNoArquivo(ofstream saida);
    ~Album();
private:

};

#endif /* ALBUM_HPP */