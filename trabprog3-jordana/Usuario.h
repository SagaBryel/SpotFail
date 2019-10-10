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
    //Usuario(string nome, int codigo);
    
    int getCodigo();
    void setCodigo(int codigo);
    string getNome();
    void setNome(string nome);
    void imprimeNoArquivo();//Gabriel vai implementar

    
    virtual ~Usuario();
private:

};

#endif /* USUARIO_H */

