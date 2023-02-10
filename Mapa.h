#ifndef MAPA_H
#define MAPA_H

#include "Acervo.h"

class Mapa : public Acervo
{
	 private:
        int paginas;
        int tamanhoPaginas;
        
    public:
    	Mapa();
        ~Mapa();
        
        int getPaginas();
        int getTamanhoPaginas();
        
        void setPaginas(int paginas);
        void setTamanhoPaginas(int tamanhoPaginas);
        
        void imprimirInformacoes();
        void informacoesItem();
    protected:
};

#endif
