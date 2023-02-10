#ifndef RELATORIO_H
#define RELATORIO_H

#include "Acervo.h"

class Relatorio : public Acervo
{
	private:
        int paginas;
        int tamanhoPaginas;
        
    public:
    	Relatorio();
        ~Relatorio();
        
        int getPaginas();
        int getTamanhoPaginas();
        
        void setPaginas(int paginas);
        void setTamanhoPaginas(int tamanhoPaginas);
        
        void imprimirInformacoes();
        void informacoesItem();
        
    protected:
};

#endif
