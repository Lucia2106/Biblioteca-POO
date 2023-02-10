#include "Livro.h"

Livro::Livro()
{
}

Livro::~Livro()
{
}

int Livro::getPaginas(){
    return paginas;
}

int Livro::getTamanhoPaginas(){
    return tamanhoPaginas;
}

string Livro::getISBN(){
    return ISBN;
}

void Livro::setPaginas(int paginas){
    this->paginas=paginas;
}

void Livro::setTamanhoPaginas(int tamanhoPaginas){
    this->tamanhoPaginas=tamanhoPaginas;
}

void Livro::setISBN(){
    string ISBN;
    do{
        cout<<"Entre com a ISBN do livro: "; //O tipo ISBN tem uma restrição de 13 caracteres.
        getline(cin,ISBN);
        fflush(stdin);
        cin.clear();
        if(ISBN.size()!=13){
            cout<<"O campo ISBN deve ter 13 digitos"<<endl;
        }
    }while(ISBN.size()!=13);
    this->ISBN=ISBN;
}

void Livro::imprimirInformacoes(){
	Acervo::imprimirInformacoes(); // Como a função esta com virtual , ao ser chamada vai pra classe que foi criada , aqui vai pro acervo.
	cout<< paginas <<" pág. : " << tamanhoPaginas << "cm." <<endl;//Variaveis especificas da classe
	cout<< "ISBN: " <<ISBN <<endl;
	Acervo::imprimirInformacoes2(); // Para ficar no modelo de exemplo e chamado essa segunda função.
}

void Livro::informacoesItem(){
	Acervo::informacoesItem();
	cout<<"ISBN: "<<ISBN << endl;//Variaveis especificas da classe
}
