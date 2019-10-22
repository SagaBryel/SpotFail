#include "PlataformaDigital.h"

using namespace std;
using namespace cpp_util;

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

void PlataformaDigital::carregaArquivoUsuarios(ifstream entrada){
    string linha;
    int codigo;
    vector<string> tokens;
    //consumir a primeira linha, que e apenas um cabecalho
    getline(entrada, linha);
    
    while(! entrada.eof()){
        getline(entrada, linha);
        Tokenizer tok(linha, ';');
        tokens = tok.remaining();
//aaaaaaaaa
        codigo = (int)parseDouble(tokens[0], LOCALE_PT_BR);
        cout << codigo;
        
        
        if(tokens[1] == "U"){
            Assinante *novo = new Assinante(tokens[2], codigo);
            //assinantes.push_back(novo);
        }
        else if (tokens[1] == "P"){
            //cria um podcaster
        }
        else{
            //cria um musico
        }
        
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

