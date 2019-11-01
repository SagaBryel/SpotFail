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
    
    int aux = 1;
    //se tiver os argumentos na entrada
    if(argc == 8){
        while(aux <= 8){
            cout << "rota linha de comando";
            if(argv[aux] == "-u"){
                arqUsuarios.open(argv[aux+1]);
                aux++;
            }
            if(argv[aux] == "-f"){
                arqFavoritos.open(argv[aux+1]);
                aux++;
            }
            if(argv[aux] == "-g"){
                arqGenero.open(argv[aux+1]);
                aux++;
            }
            if(argv[aux] == "-m"){
                arqMidias.open(argv[aux+1]);
                aux++;
            }           
            aux++;
        }
    }
    //caso nao tenha os argumentos na entrada
    else {
        cout << "rota em codigo";
        arqUsuarios.open("usuarios.csv");
        arqGenero.open("generos.csv");
        arqMidias.open("midias_corrigidas.csv");
        arqFavoritos.open("favoritos.csv"); 
    }
    
    PlataformaDigital* b = new PlataformaDigital("SpotFail");
    b->carregaArquivoUsuarios(arqUsuarios);
    b->carregaArquivoGeneros(arqGenero);
    b->carregaArquivosMidias(arqMidias);
    b->carregaArquivosFavoritos(arqFavoritos);
    b->gerarRelatorios();
    

    
    delete b;//;-; pelomenos 1
    return 0;
}

