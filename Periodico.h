#ifndef PERIODICO_H
#define PERIODICO_H

#include "Acervo.h"

class Periodico : public Acervo
{
	private:
        int paginas;
        int tamanhoPaginas;
        string ISSN;
        string Tipo;
        
    public:
		Periodico();
        ~Periodico();
        
        int getPaginas();
        int getTamanhoPaginas();
        string getISSN();
        string getTipo();

        void setPaginas(int paginas);
        void setTamanhoPaginas(int tamanhoPaginas);
        void setISSN();
        void setTipo();
        
        void imprimirInformacoes();
        void informacoesItem();
        
	protected:
};

#endif
