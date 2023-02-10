#include "Periodico.h"

Periodico::Periodico()
{
}

Periodico::~Periodico()
{
}

int Periodico::getPaginas(){
    return paginas;
}

int Periodico::getTamanhoPaginas(){
    return tamanhoPaginas;
}

string Periodico::getISSN(){
    return ISSN;
}

string Periodico::getTipo(){
    return Tipo;
}

void Periodico::setPaginas(int paginas){
    this->paginas=paginas;
}
void Periodico::setTamanhoPaginas(int tamanhoPaginas){
    this->tamanhoPaginas=tamanhoPaginas;
}
void Periodico::setISSN(){
    string ISSN;
    do{
        cout<<"Entre com o ISSN do per�odico:";
        getline(cin,ISSN);
        fflush(stdin);
        cin.clear();
        if(ISSN.size()!=9){
            cout<<"O campo ISSN deve ter 9 DIGITOS!"<<endl; //Restri��o na variavel ISSN de 9 digitos
        }
    }while(ISSN.size()!=9);
    this->ISSN=ISSN;
}

void Periodico::setTipo(){
    char t;
    do{
        cout<<"Entre com o tipo do Per�odico (Revista - R | Jornal - J):"; //Variavel do tipo possui duas possibilidade
        cin>>t;
        cin.clear();
        fflush(stdin);
        if(t!='R'&&t!='r'&&t!='j'&&t!='J'){ //verifica�ao  de op��o valida
            cout<<"Op��o invalida"<<endl;
        }
    }while(t!='R'&&t!='r'&&t!='j'&&t!='J'); //libera��o e acerto da op��o desejada 
    if(t=='R'||t=='r'){
        this->Tipo="Revista";
    }else{
        this->Tipo="Jornal";
    }
}

void Periodico::imprimirInformacoes(){
	Acervo::imprimirInformacoes();
	cout<< paginas <<" p�g. : " << tamanhoPaginas << "cm." <<endl;
	cout<< "ISSN: " << ISSN << endl;
	cout<< "Tipo: " << Tipo << endl;//Variaveis especificas da classe
	Acervo::imprimirInformacoes2();
}

void Periodico::informacoesItem(){
	Acervo::informacoesItem();
	cout<<"ISSN: "<<ISSN << endl;//Variaveis especificas da classe
	cout<<"Tipo: "<<Tipo <<endl;
}
