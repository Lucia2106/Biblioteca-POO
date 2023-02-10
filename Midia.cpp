#include "Midia.h"

Midia::Midia()
{
}

Midia::~Midia()
{
}

string Midia::getTipo(){
    return Tipo;
}

void Midia::setTipo(){
    char t;

    do{
        cout<<"Entre com o tipo da Mídia( F - Fita | V - VHS | C - CD | D - DVD):"; //Parametro tipo , especifico da subclasse
        cin>>t;
        fflush(stdin);
        cin.clear();
        if(t!='f'&&t!='F'&&t!='V'&&t!='v'&&t!='C'&&t!='c'&&t!='D'&&t!='d'){ //Verificação de opção invalida
            cout<<"Opção invalida."<<endl;
        }
    }while(t!='f'&&t!='F'&&t!='V'&&t!='v'&&t!='C'&&t!='c'&&t!='D'&&t!='d'); // Liberaçao e verificação do tipo correto
    if(t=='f'||t=='F'){
        this->Tipo="Fita";
    }else if(t=='v'||t=='V'){
        this->Tipo="VHS";
    }else if(t=='C'||t=='c'){
        this->Tipo="CD";
    }else if(t=='D'||t=='d'){
        this->Tipo="DVD";
    }
}

void Midia::imprimirInformacoes(){
	Acervo::imprimirInformacoes();
	cout<< "Tipo: " <<Tipo <<endl;//Variaveis especificas da classe
	Acervo::imprimirInformacoes2();
}

void Midia::informacoesItem(){
	Acervo::informacoesItem();//Variaveis especificas da classe
	cout<<"Tipo: "<<Tipo << endl;
}
