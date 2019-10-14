#include <cstdlib>
#include"Assinante.h"
#include"Produtor.hpp"
#include<iostream>

using namespace std;

int main(int argc, char** argv) {
    Produtor *a=new Produtor("ESTAMOS QUASE CHEGANDO, NAO DESISTA ",404);//Teste ok
    cout << a->getNome();
    cout << a->getCodigo();
    return 0;
}

