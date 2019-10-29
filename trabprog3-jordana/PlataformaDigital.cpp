#include "PlataformaDigital.h"

using namespace std;

PlataformaDigital::PlataformaDigital() {
}

PlataformaDigital::PlataformaDigital(string nome){
    this->nome=nome;
}
//String compara se comporta de maneira estranha. Pelomenos para o genero rock string compare deixa passar tb Sertaneijo

void PlataformaDigital::imprimeProdutos(string genero){
    string midgen;
    vector<Midia>::iterator iteMid;

    for(iteMid = midias.begin(); iteMid < midias.end(); iteMid++){
        midgen = iteMid.base()->getGenero().getNome();
        if(!stringCompare(midgen, genero)){
            cout << iteMid.base()->getGenero().getNome() << endl;
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
    int codigo;
    vector<string> tokens;
    //consumir a primeira linha, que e apenas um cabecalho
    getline(entrada, linha);
    while(!entrada.eof()){
        getline(entrada, linha);
        Tokenizer tok(linha, ';');
        tokens = tok.remaining();

        codigo = (int)parseDouble(tokens[0], LOCALE_PT_BR);      
        
        if(tokens[1] == "U" && !entrada.eof()){//preenchimento do vector
            Assinante *novo = new Assinante(tokens[2], codigo);
            assinantes.push_back(*novo);
        }
        //Mudar para usar a função insere assinante
        else if (tokens[1] == "A" && !entrada.eof()){//preenchimento do vector
            Artista *novo2 = new Artista(tokens[2], codigo);
            produtores.push_back(*novo2);
        }
        else if(tokens[1]== "P"  && !entrada.eof()){//preenchimento do vector
            Podcaster *novo3 = new Podcaster(tokens[2], codigo);
            produtores.push_back(*novo3);
        }        
    }
    //TESTES 
    
    /*vector<Assinante>::iterator iteAss;
    for(iteAss = assinantes.begin(); iteAss < assinantes.end(); iteAss++){
        cout << iteAss.base()->getCodigo() << ";" << iteAss.base()->getNome() << endl;
    }
    
    vector<Poadcaster>::iterator itePod;
    for(itePod = poadcasters.begin(); itePod < poadcasters.end(); itePod++){
        cout << itePod.base()->getCodigo() << ";" << itePod.base()->getNome() << endl;
    }
    
    vector<Artista>::iterator iteArt;
    for(iteArt = artistas.begin(); iteArt < artistas.end(); iteArt++){
        cout << iteArt.base()->getCodigo() << ";" << iteArt.base()->getNome() << endl;
    }*/ 
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

    int qtdprodutores;
    //consumir a primeira linha, que e apenas um cabecalho
    getline(entrada, linha);
    
    int auxcodigo;
    int auxano;
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
            Musica *novom = new Musica(tokens[1], auxcodigo, auxgen, auxDuracao, auxano);
            midias.push_back(*novom);
        }
        
        if(tokens[2] == "P" && !entrada.eof()){
            Podcast *novop = new Podcast(tokens[1], auxcodigo, auxgen, auxano);
            midias.push_back(*novop);
        }
        vector<Produtor>::iterator iteProds;
        Tokenizer tokprods(tokens[3]);
        vectprods = tokprods.remaining();
        qtdprodutores = vectprods.size();
        while(qtdprodutores > 0){
            for(iteProds = produtores.begin(); iteProds < produtores.end(); iteProds++){
                if(iteProds.base()->getNome() == tokprods[qtdprodutores - 1]){
                    
                }
                    
            }
            qtdprodutores--;
        }
    }
//TESTES
//    vector<Musica>::iterator iteMusica;
//    for(iteMusica = musicas.begin(); iteMusica < musicas.end(); iteMusica++){
//        cout << iteMusica.base()->getNome() << endl;
//    }
//    vector<Podcast>::iterator itePod;
//    for(itePod = podcasts.begin(); itePod < podcasts.end(); itePod++){
//        cout << itePod.base()->getNome() << endl;
//    } 
}

void PlataformaDigital::exportarBiblioteca(){
    
}

void PlataformaDigital::gerarRelatorios(){
    gerarRelatoriosBackup();
}
void PlataformaDigital::gerarRelatoriosBackup(){
    ofstream backup;
    backup.open("4-backup.txt");
    
    backup << "Usuarios:" << endl << "codigo;nome" << endl;
    
    vector<Assinante>::iterator iteass;

    for(iteass = assinantes.begin(); iteass < assinantes.end(); iteass++){
        iteass.base()->imprimeNoArquivo(backup);
    }
    
    backup << "Midias:" << endl << "nome;tipo;produtores;duração;gênero;temporada;codigo_do_album;data_de_publicação" << endl;
}

void PlataformaDigital::carregaArquivosFavoritos(){
    
}
    
PlataformaDigital::~PlataformaDigital() {
}

//Alguns acordos de normalização (gabriel-hiuri)
//nomes de iteradores são da forma iteTipo (ite + Tipo)
//espaçamentos entre igualdades e após ';' de fors
//quebras de linhas separando seções de codigos