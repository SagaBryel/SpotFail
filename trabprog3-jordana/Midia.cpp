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

void Midia::addProdutores(Produtor p){
    this->produtores.push_back(p);
}
void Midia::addListaProdutores(string ps){
    vector<string> tokens;
    int qtdprodutores;
    //Para verificar o caso quando há mais de um produtor em uma midia
    vector<Produtor>::iterator iteProds;
    Tokenizer tokprods(ps, ',');
    tokens = tokprods.remaining();
    //Define a quantidade de produtores que uma midia tem a fim de usar como indice (por isso o decressimo de 1)
    qtdprodutores = tokprods.remaining().size() -1;
    while(qtdprodutores >= 0){
        for(iteProds = produtores.begin(); iteProds < produtores.end(); iteProds++){
            //compara o codigo da produção em analize com os codigos dos produtores
            if(iteProds.base()->getCodigo() == (int)parseDouble(tokens[qtdprodutores-1], LOCALE_PT_BR)){
                addProdutores(*iteProds.base());
            }
        
        }
        qtdprodutores--;
    }
}