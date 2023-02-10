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
        cout<<"Entre com o tipo de Trabalho de conclusão (M - Monografia | D - Dissertação | T - Tese):"; //Tipos possiveis de variaveis
        cin>>t;
        fflush(stdin);
        cin.clear();
        if(t!='M'&&t!='m'&&t!='d'&&t!='D'&&t!='T'&&t!='t'){
            cout<<"Opção invalida"<<endl;
        }
    }while(t!='M'&&t!='m'&&t!='d'&&t!='D'&&t!='T'&&t!='t'); //Verificação final e valores possiveis da variavel
    if(t=='m'||t=='M'){
        this->Tipo="Monografia";
    }else if(t=='d'||t=='D'){
        this->Tipo="Dissetação";
    }else{
        this->Tipo="Tese";
    }
}

void TrabalhoDeConclusao::imprimirInformacoes(){
	Acervo::imprimirInformacoes();
	cout<< paginas <<" pág. : " << tamanhoPaginas << "cm." <<endl;//Variaveis especificas da classe
	cout<< "Tipo: " <<Tipo <<endl;
	Acervo::imprimirInformacoes2();
}

void TrabalhoDeConclusao::informacoesItem(){
	Acervo::informacoesItem();
	cout<<"Tipo: "<<Tipo << endl;//Variaveis especificas da classe
}
