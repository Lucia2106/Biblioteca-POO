#include "Mapa.h"

Mapa::Mapa()
{
}

Mapa::~Mapa()
{
}

int Mapa::getPaginas(){
    return paginas;
}

int Mapa::getTamanhoPaginas(){
    return tamanhoPaginas;
}

void Mapa::setPaginas(int paginas){
    this->paginas=paginas;
}
void Mapa::setTamanhoPaginas(int tamanhoPaginas){
    this->tamanhoPaginas=tamanhoPaginas;
}

void Mapa::imprimirInformacoes(){
	Acervo::imprimirInformacoes();
	cout<< paginas <<" pág. : " << tamanhoPaginas << "cm." <<endl;//Variaveis especificas da classe
	Acervo::imprimirInformacoes2();
}

void Mapa::informacoesItem(){
	Acervo::informacoesItem();
}
