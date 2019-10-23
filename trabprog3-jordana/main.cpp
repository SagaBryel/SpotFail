#include <cstdlib>
#include"Assinante.h"
#include"Produtor.hpp"
#include "PlataformaDigital.h"
#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char** argv) {
    ifstream arq;
    arq.open("usuarios.csv");
    Produtor *a=new Produtor("ESTAMOS QUASE CHEGANDO, NAO DESISTA ",404);//Teste ok
    cout << a->getNome();
    cout << a->getCodigo();
    PlataformaDigital* b = new PlataformaDigital("OI");
    b->carregaArquivoUsuarios(arq);
   
    return 0;
}

