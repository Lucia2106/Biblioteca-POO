#include "Relatorio.h"

Relatorio::Relatorio()
{
}

Relatorio::~Relatorio()
{
}

int Relatorio::getPaginas(){
    return paginas;
}

int Relatorio::getTamanhoPaginas(){
    return tamanhoPaginas;
}

void Relatorio::setPaginas(int paginas){
    this->paginas=paginas;
}
void Relatorio::setTamanhoPaginas(int tamanhoPaginas){
    this->tamanhoPaginas=tamanhoPaginas;
}

void Relatorio::imprimirInformacoes(){
	Acervo::imprimirInformacoes();
	cout<< paginas <<" pág. : " << tamanhoPaginas << "cm." <<endl;//Variaveis especificas da classe
	Acervo::imprimirInformacoes2();
}

void Relatorio::informacoesItem(){
	Acervo::informacoesItem();
}
