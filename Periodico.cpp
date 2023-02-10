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
        cout<<"Entre com o ISSN do períodico:";
        getline(cin,ISSN);
        fflush(stdin);
        cin.clear();
        if(ISSN.size()!=9){
            cout<<"O campo ISSN deve ter 9 DIGITOS!"<<endl; //Restrição na variavel ISSN de 9 digitos
        }
    }while(ISSN.size()!=9);
    this->ISSN=ISSN;
}

void Periodico::setTipo(){
    char t;
    do{
        cout<<"Entre com o tipo do Períodico (Revista - R | Jornal - J):"; //Variavel do tipo possui duas possibilidade
        cin>>t;
        cin.clear();
        fflush(stdin);
        if(t!='R'&&t!='r'&&t!='j'&&t!='J'){ //verificaçao  de opção valida
            cout<<"Opção invalida"<<endl;
        }
    }while(t!='R'&&t!='r'&&t!='j'&&t!='J'); //liberação e acerto da opção desejada 
    if(t=='R'||t=='r'){
        this->Tipo="Revista";
    }else{
        this->Tipo="Jornal";
    }
}

void Periodico::imprimirInformacoes(){
	Acervo::imprimirInformacoes();
	cout<< paginas <<" pág. : " << tamanhoPaginas << "cm." <<endl;
	cout<< "ISSN: " << ISSN << endl;
	cout<< "Tipo: " << Tipo << endl;//Variaveis especificas da classe
	Acervo::imprimirInformacoes2();
}

void Periodico::informacoesItem(){
	Acervo::informacoesItem();
	cout<<"ISSN: "<<ISSN << endl;//Variaveis especificas da classe
	cout<<"Tipo: "<<Tipo <<endl;
}
