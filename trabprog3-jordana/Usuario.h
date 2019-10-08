#ifndef USUARIO_H
#define USUARIO_H
#include<string>
#include<iostream>

using namespace std;

class Usuario {
protected:
    string nome;
    int codigo;
public:
    int getCodigo();
    void setCodigo(int codigo);
    string getNome();
    void setNome(string nome);
    void imprimeNoArquivo();//Gabriel vai implementar
    void carregaArquivo();//Gabriel vau implementar
    Usuario();
    Usuario(const Usuario& orig);
    virtual ~Usuario();
private:

};

#endif /* USUARIO_H */

