#include "PlataformaDigital.h"

using namespace std;

//por desespero
static bool comparaProd(Produtor* a, Produtor* b){
    if(a->getNome().compare(b->getNome()) < 0)
        return true;
    return false;
}
//Por alguma razão (que desconheco) há um //r ao fim de de strings q representam nome
static string tiraBarraBarraR(string s){
    int tam = s.length();
    string aux = s.substr(0, s.length()-1);
  

    return aux;
}

PlataformaDigital::PlataformaDigital() {
}

PlataformaDigital::PlataformaDigital(string nome){
    this->nome=nome;
}
//String compara se comporta de maneira estranha. Pelomenos para o genero rock string compare deixa passar tb Sertaneijo

void PlataformaDigital::imprimeProdutos(string genero){
    string midgen;
    vector<Midia*>::iterator iteMid;

    for(iteMid = midias.begin(); iteMid < midias.end(); iteMid++){
        //
        midgen = (*iteMid.base())->getGenero().getNome();
        if(!stringCompare(midgen, genero)){
            cout << (*iteMid.base())->getGenero().getNome() << endl;
        }
    }
}
void PlataformaDigital::imprimeAssinantes(){
    
}
void PlataformaDigital::inserirAssinante(Assinante* a){
    
}
void PlataformaDigital::removerAssinante(Assinante* a){
    
}

void PlataformaDigital::inserirProduto(Midia* novoProduto, vector<Produtor*> produtores){
   
}

void PlataformaDigital::imprimeNoArquivo(ofstream saida){
    
}

void PlataformaDigital::carregaArquivoUsuarios(ifstream &entrada){
    string linha;
    string nome;
    int codigo;
    vector<string> tokens;
    //consumir a primeira linha, que e apenas um cabecalho
    getline(entrada, linha);
    while(!entrada.eof()){
        getline(entrada, linha);
        Tokenizer tok(linha, ';');
        tokens = tok.remaining();
        nome = tiraBarraBarraR(tokens[2]);//retira o //r do final da string
        codigo = (int)parseDouble(tokens[0], LOCALE_PT_BR);      
        
        if(tokens[1] == "U" && !entrada.eof()){//preenchimento do vector
            Assinante *novo = new Assinante(nome, codigo);
            assinantes.push_back(novo);
        }
        //Mudar para usar a função insere assinante
        else if (tokens[1] == "A" && !entrada.eof()){//preenchimento do vector
            Artista *novo2 = new Artista(nome, codigo);
            produtores.push_back(novo2);
        }
        else if(tokens[1]== "P"  && !entrada.eof()){//preenchimento do vector
            Podcaster *novo3 = new Podcaster(nome, codigo);
            produtores.push_back(novo3);
        }        
    }
    //Ordena a lista de produtores
    sort(produtores.begin(), produtores.end(), comparaProd);
}

void PlataformaDigital::carregaArquivoGeneros(ifstream &entrada){
    string linha;
    vector<string> tokens;
    
    //consumir a primeira linha, que e apenas um cabecalho
    getline(entrada, linha);
        
    while(!entrada.eof()){
        getline(entrada, linha);
        Tokenizer tok(linha, ';');
        tokens = tok.remaining();  
        
        if(!entrada.eof()){//preenchimento do vector
            Midia::Genero *novo = new Midia::Genero(tokens[1], tokens[0]);
            generos.push_back(*novo);
        }    
    }
    
    //TESTES
    /*
    vector<Midia::Genero>::iterator iteGenero;
    for(iteGenero = generos.begin(); iteGenero < generos.end(); iteGenero++){
        cout << iteGenero.base()->getSigla() << ";" << iteGenero.base()->getNome() << endl;
    } */
    
}


//ainda falta lidar com Albuns
void PlataformaDigital::carregaArquivosMidias(ifstream &entrada){
    string linha;
    vector<string> tokens;
    //vector auxiliar para tratar os casos da musicas com mais de um genero
    vector<string> vectgeneros;
    //consumir a primeira linha, que e apenas um cabecalho
    getline(entrada, linha);
    int temporada;
    int auxcodigo;
    int auxano;
    int codalbum;
    double auxDuracao;
    

    
    while(!entrada.eof()){
        getline(entrada, linha);
        Tokenizer tok(linha, ';');
        tokens = tok.remaining(); 
        
        Midia::Genero* auxgen;
        vector<Midia::Genero>::iterator iteGenero;
        
        //Há musicas com dois generos, um tokenizer para pegar o primeiro
        Tokenizer togen(tokens[5], ',');
        vectgeneros = togen.remaining();
        for(iteGenero = generos.begin(); iteGenero < generos.end(); iteGenero++){
            if(iteGenero.base()->getSigla() == vectgeneros[0]){
                auxgen = iteGenero.base();
                break;
            }
        }
        

        //campos comuns a musica e podcast
        auxcodigo = (int)parseDouble(tokens[0], LOCALE_PT_BR);
        auxDuracao = parseDouble(tokens[4],LOCALE_PT_BR);
        auxano = (int)parseDouble(tokens[9],LOCALE_PT_BR);

        
        //Ainda precisa ser verificado como tratar a informação album
        if(tokens[2] == "M" && !entrada.eof()){//preenchimento do vector
            codalbum = (int)parseDouble(tokens[8], LOCALE_PT_BR);
            //ainda nao implemaentando album como objeto da classe album
            Musica *novom = new Musica(tokens[1], auxcodigo, auxgen, auxDuracao, auxano, tokens[7], codalbum);
            novom->addListaProdutores(tokens[3], this->produtores);
            midias.push_back(novom);
        }
        
        else if(tokens[2] == "P" && !entrada.eof()){
            temporada = (int)parseDouble(tokens[6], LOCALE_PT_BR);
            Podcast *novop = new Podcast(tokens[1], auxcodigo, auxgen, auxDuracao, auxano, temporada);
            novop->addListaProdutores(tokens[3], this->produtores);
            midias.push_back(novop);
        }
        
    }

}

void PlataformaDigital::exportarBiblioteca(){
    
}

void PlataformaDigital::gerarRelatorios(){
    gerarHellatorioBackup();
    gerarHellatorioProdutores();
}

void PlataformaDigital::gerarHellatorioProdutores(){
    ofstream relaprod;
    relaprod.open("2-produtores.csv");
    vector<Produtor*>::iterator iteProd;
    for(iteProd = produtores.begin(); iteProd < produtores.end(); iteProd++){
        (*iteProd.base())->ordenaMidia();//ordena a lista de midias antes de imprimir
        (*iteProd.base())->imprimeNoArquivo(relaprod);
    }
}

void PlataformaDigital::gerarHellatorioFavoritos(){
    
}


void PlataformaDigital::gerarHellatorioBackup(){
    ofstream backup;
    backup.open("4-backup.txt");
    
    Musica *m;
    Podcast *p;
    
    backup << "Usuarios:" << endl << "codigo;nome" << endl;
    
    vector<Assinante*>::iterator iteAss;
    for(iteAss = assinantes.begin(); iteAss < assinantes.end(); iteAss++){
        (*iteAss.base())->imprimeNoArquivo(backup);
    }
    backup << endl;
    backup << "Midias:" << endl << "nome;tipo;produtores;duração;gênero;temporada;codigo_do_album;data_de_publicação" << endl;
    
    vector<Midia*>::iterator iteMidia;
    for(iteMidia = midias.begin(); iteMidia < midias.end(); iteMidia++){
        
        m = dynamic_cast<Musica *> (*iteMidia.base());
        if(m){
            m->imprimeNoArquivo(backup);
        }
        
        p = dynamic_cast<Podcast *> (*iteMidia.base());
        if(p){
            p->imprimeNoArquivo(backup);
        }
    }
    
}

void PlataformaDigital::carregaArquivosFavoritos(ifstream &entrada){
    string linha;
    vector<string> tokens;
    vector<string> tokens2;
    
    vector<Assinante*>::iterator iteAss;
    vector<Midia*>::iterator iteMid;
    //consumir a primeira linha, que e apenas um cabecalho
    getline(entrada, linha);
    
    int ass=0;//contador de assinantes
    int qtdMidia=midias.size();
    
    while(!entrada.eof() && ass<assinantes.size()){
        getline(entrada, linha);
        Tokenizer tok(linha, ';');
        tokens = tok.remaining();  
        Tokenizer tokFav(tokens[1],',');
        tokens2 =tokFav.remaining();
        int i=0;//contator para andar no arquivo, tokens
        
        int favoritas=0;
        while(favoritas<qtdMidia){
            if(midias[favoritas]->getCodigo()==(int)parseDouble(tokens2[i],LOCALE_PT_BR)){
                assinantes[ass]->inserirFavorito(midias[favoritas]);
                i++;
                favoritas=0;

            }
            if(i==tokens2.size()){
                    break;
            }
            favoritas++;
        }
        ass++;
        if(ass==assinantes.size()){
            break;
        }
            
    }
}
    
PlataformaDigital::~PlataformaDigital() {
}

//Alguns acordos de normalização (gabriel-hiuri)
//nomes de iteradores são da forma iteTipo (ite + Tipo)
//espaçamentos entre igualdades e após ';' de fors
//quebras de linhas separando seções de codigos