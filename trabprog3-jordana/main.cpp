#include <cstdlib>
#include"Assinante.h"
#include"Produtor.hpp"
#include "PlataformaDigital.h"
#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char** argv) {
    ifstream arqUsuarios;
    ifstream arqGenero;
    ifstream arqMidias;
    ifstream arqFavoritos;
    arqUsuarios.open("usuarios.csv");
    arqGenero.open("generos.csv");
    arqMidias.open("midias_corrigidas.csv");
    arqFavoritos.open("favoritos.csv");
    
    PlataformaDigital* b = new PlataformaDigital("OI");
    b->carregaArquivoUsuarios(arqUsuarios);
    b->carregaArquivoGeneros(arqGenero);
    b->carregaArquivosMidias(arqMidias);
    b->carregaArquivosFavoritos(arqFavoritos);
    b->imprimeProdutos("Rock");
    b->gerarRelatorios();
    return 0;
}

