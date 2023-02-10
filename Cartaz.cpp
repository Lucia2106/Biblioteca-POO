#include "Cartaz.h"

Cartaz::Cartaz()
{
}

Cartaz::~Cartaz()
{
}

int Cartaz::getPaginas(){
    return paginas;
}

int Cartaz::getTamanhoPaginas(){
    return tamanhoPaginas;
}

void Cartaz::setPaginas(int paginas){
    this->paginas=paginas;
}
void Cartaz::setTamanhoPaginas(int tamanhoPaginas){
    this->tamanhoPaginas=tamanhoPaginas;
}

void Cartaz::imprimirInformacoes(){
	Acervo::imprimirInformacoes();
	cout<< paginas <<" pág. : " << tamanhoPaginas << "cm." <<endl; //Variaveis especificas da classe
	Acervo::imprimirInformacoes2();
}

void Cartaz::informacoesItem(){
	Acervo::informacoesItem();
}
