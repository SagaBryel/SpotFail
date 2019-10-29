#ifndef USUARIO_H
#define USUARIO_H
#include<string>
#include<iostream>
#include<fstream>

using namespace std;

class Usuario {
protected:
    string nome;
    int codigo;
public:
    //Usuario(string nome, int codigo);
    Usuario();
    int getCodigo();
    void setCodigo(int codigo);
    string getNome();
    void setNome(string nome);
    //void imprimeNoArquivo(ofstream saida);//Gabriel vai implementar
    virtual ~Usuario();
private:

};

#endif /* USUARIO_H */

