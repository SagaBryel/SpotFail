#include "Produtor.hpp"
#include "Midia.hpp"
#include <string>
using namespace std;

static bool comparaMidia(Midia* a, Midia* b){
    if(a->getNome().compare(b->getNome()) < 0)
        return true;
    return false;
}

Produtor::Produtor() {
}

//Utilizando o construtor da superclasse???
Produtor::Produtor(string nome, int codigo) /*: Usuario(nome, codigo)*/{
    this->nome=nome;
    this->codigo=codigo;
}

Produtor::~Produtor() {
}

void Produtor::imprimeProdutosDesenvolvidos(){
     
}


void Produtor::imprimeNoArquivo(ofstream &relaprod){
    //Por algum motivo nao printa (pelomenos na minha maquina) conforme o esperado
    relaprod << this->nome;
    if(this->midiasproduzidas.size() == 0){
        relaprod << ';';
    }
    else{
        vector<Midia*>::iterator iteMidia;
        //Na especificação é solicitada a impressao das midias separadas por ',' e espaço
        //Mas na saida fornecida as midias sao separadas por ';', inclusiva há ';' mesmo qnd nao tem midias
        //Como há midias com ',' no nome adotei a separação por ';'
        for(iteMidia = midiasproduzidas.begin(); iteMidia < midiasproduzidas.end(); iteMidia++){
            relaprod << ';' << (*iteMidia.base())->getNome();
        }
    }
    relaprod << endl;
}


void Produtor::addMidia(Midia* m){
    this->midiasproduzidas.push_back(m);
}
bool Produtor::operator <(Produtor* p){
    if(this->getNome().compare(p->getNome()) < 0)
        return true;
    return false;
}
bool Produtor::operator >(Produtor* p){
    if(this->getNome().compare(p->getNome()) > 0)
        return true;
    return false;
}


void Produtor::ordenaMidia(){
    sort(this->midiasproduzidas.begin(), this->midiasproduzidas.end(), comparaMidia);
}
