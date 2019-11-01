#include <vector>

#include "Midia.hpp"
int Midia::qtdprodutos = 0;

Midia::Midia() {
}
Midia::Midia(string nome, int codigo, Genero* genero) {
    this->nome = nome;
    this->codigo = codigo;
    this->genero = genero;
    qtdprodutos++;
}

Midia::~Midia() {
}

//Construtor da classe interna
Midia::Genero::Genero(string nome, string sigla){
    this->nome = nome;
    this->sigla = sigla;
}

string Midia::Genero::getNome(){
    return this->nome;
}
        
string Midia::Genero::getSigla(){
    return sigla;
}

string Midia::getNome(){
    return this->nome;
}

Midia::Genero::Genero(){
    
}

Midia::Genero Midia::getGenero(){
    return *genero;
}

Midia::Genero::~Genero(){
    
}

int Midia::getCodigo(){
    return this->codigo;
}

void Midia::setQtdProdutos(vector<Midia*> midias){
    this->qtdprodutos=midias.size();
}

int Midia::getQtdProdutos(){
    return this->qtdprodutos;
}

void Midia::addProdutores(Produtor *p){
    this->produtores.push_back(p);
}

void Midia::addListaProdutores(string ps, vector<Produtor*> prodsplataforma){
    vector<string> tokens;
    int qtdprodutores;
    //cout << ps << endl;//conferencia de dados
    
    //Para verificar o caso quando há mais de um produtor em uma midia
    vector<Produtor*>::iterator iteProds;
    Tokenizer tokprods(ps, ',');
    tokens = tokprods.remaining();
    //Define a quantidade de produtores que uma midia tem a fim de usar como indice, 0 é um produtor
    qtdprodutores = tokens.size()-1;
    while(qtdprodutores >= 0){
        for(iteProds = prodsplataforma.begin(); iteProds < prodsplataforma.end(); iteProds++){
            //compara o codigo da produção em analize com os codigos dos produtores
            if((*iteProds.base())->getCodigo() == (int)parseDouble(tokens[qtdprodutores], LOCALE_PT_BR)){
                addProdutores(*iteProds.base());
                //Considerando que cada midia aparece apenas uma vez (mesmo com dois produtores)
                //Quando adicionar um produtor a uma midia, adciona também essa midia no produtor
                //Para fins de gerar o relatorio de produtores
                (*iteProds.base())->addMidia(this);
                break;
            }
        
        }
        qtdprodutores--;
    }
}