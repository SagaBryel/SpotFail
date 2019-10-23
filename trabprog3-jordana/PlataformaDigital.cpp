#include "PlataformaDigital.h"

using namespace std;
//using namespace cpp_util;

PlataformaDigital::PlataformaDigital() {
}

PlataformaDigital::PlataformaDigital(string nome){
    this->nome=nome;
}
void PlataformaDigital::imprimeProdutos(string genero){
        
}
void PlataformaDigital::imprimeAssinantes(){
    
}
void PlataformaDigital::inserirAssinante(Assinante* a){
    
}
void PlataformaDigital::removerAssinante(Assinante* a){
    
}
//Midia ainda nao foi implementada
void PlataformaDigital::inserirProduto(Midia* novoProduto, vector<Produtor*> produtores){
    
}

void PlataformaDigital::imprimeNoArquivo(ofstream saida){
    
}

void PlataformaDigital::carregaArquivoUsuarios(ifstream &entrada){
    string linha;
    int codigo;
    vector<string> tokens;
    //assinantes= new vector<Assinante>;
    //consumir a primeira linha, que e apenas um cabecalho
    getline(entrada, linha);
    while(!entrada.eof()){
        getline(entrada, linha);
        Tokenizer tok(linha, ';');
        tokens = tok.remaining();

        codigo = (int)parseDouble(tokens[0], LOCALE_PT_BR);      
        
        if(tokens[1] == "U"){
            Assinante *novo = new Assinante(tokens[2], codigo);
            assinantes.push_back(*novo);
            //cout << "U  ";
        }
        else if (tokens[1] == "A"){
            Artista *novo2 = new Artista(tokens[2], codigo);
            artistas.push_back(*novo2);
            //cout << "A ";
        }
        else{
            Poadcaster *novo3 = new Poadcaster(tokens[2], codigo);
            poadcasters.push_back(*novo3);
            //cout << "P ";
        }        
    }
    vector<Assinante>::iterator iteAss;
    for(iteAss = assinantes.begin(); iteAss < assinantes.end(); iteAss++){
        cout << "U " << iteAss.base()->getNome() << endl;
    }
    
    vector<Artista>::iterator iteArt;
    for(iteArt = artistas.begin(); iteArt < artistas.end(); iteArt++){
        cout << "A " << iteArt.base()->getNome() << endl;
    }
    
    vector<Poadcaster>::iterator itePod;
    for(itePod = poadcasters.begin(); itePod < poadcasters.end(); itePod++){
        cout << "P " << itePod.base()->getNome() << endl;
    }
}

void PlataformaDigital::carregaArquivoGeneros(){
    
}

void PlataformaDigital::carregaArquivosMidias(){
    
}

void PlataformaDigital::exportarBiblioteca(){
    
}

void PlataformaDigital::gerarRelatorios(){
    
}

void PlataformaDigital::carregaArquivosFavoritos(){
    
}
    

PlataformaDigital::~PlataformaDigital() {
}

