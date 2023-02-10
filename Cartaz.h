#ifndef CARTAZ_H
#define CARTAZ_H

#include "Acervo.h"

class Cartaz : public Acervo
{
	private:
        int paginas;
        int tamanhoPaginas;
        
    public:
    	Cartaz();
        ~Cartaz();
        
        int getPaginas();
        int getTamanhoPaginas();
    
        void setPaginas(int paginas);
        void setTamanhoPaginas(int tamanhoPaginas);
        
        void imprimirInformacoes();
        void informacoesItem();
        
    protected:
};

#endif
