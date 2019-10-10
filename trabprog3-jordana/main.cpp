#include <cstdlib>
#include"Assinante.h"
#include"Produtor.hpp"
#include<iostream>

using namespace std;

int main(int argc, char** argv) {
    Produtor *a=new Produtor("GABRIEL",24);//Teste ok
    cout << a->getNome();
    cout << a->getCodigo();
    return 0;
}

