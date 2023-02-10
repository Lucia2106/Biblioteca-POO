#include "TrabalhoDeConclusao.h"

TrabalhoDeConclusao::TrabalhoDeConclusao()
{
}

TrabalhoDeConclusao::~TrabalhoDeConclusao()
{
}

int TrabalhoDeConclusao::getPaginas(){
    return paginas;
}

int TrabalhoDeConclusao::getTamanhoPaginas(){
    return tamanhoPaginas;
}

string TrabalhoDeConclusao::getTipo(){
    return Tipo;
}

void TrabalhoDeConclusao::setPaginas(int paginas){
    this->paginas=paginas;
}
void TrabalhoDeConclusao::setTamanhoPaginas(int tamanhoPaginas){
    this->tamanhoPaginas=tamanhoPaginas;
}

void TrabalhoDeConclusao::setTipo(){
    char t;
    do{
        cout<<"Entre com o tipo de Trabalho de conclus�o (M - Monografia | D - Disserta��o | T - Tese):"; //Tipos possiveis de variaveis
        cin>>t;
        fflush(stdin);
        cin.clear();
        if(t!='M'&&t!='m'&&t!='d'&&t!='D'&&t!='T'&&t!='t'){
            cout<<"Op��o invalida"<<endl;
        }
    }while(t!='M'&&t!='m'&&t!='d'&&t!='D'&&t!='T'&&t!='t'); //Verifica��o final e valores possiveis da variavel
    if(t=='m'||t=='M'){
        this->Tipo="Monografia";
    }else if(t=='d'||t=='D'){
        this->Tipo="Disseta��o";
    }else{
        this->Tipo="Tese";
    }
}

void TrabalhoDeConclusao::imprimirInformacoes(){
	Acervo::imprimirInformacoes();
	cout<< paginas <<" p�g. : " << tamanhoPaginas << "cm." <<endl;//Variaveis especificas da classe
	cout<< "Tipo: " <<Tipo <<endl;
	Acervo::imprimirInformacoes2();
}

void TrabalhoDeConclusao::informacoesItem(){
	Acervo::informacoesItem();
	cout<<"Tipo: "<<Tipo << endl;//Variaveis especificas da classe
}
