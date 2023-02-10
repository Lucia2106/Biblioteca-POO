#ifndef MIDIA_H
#define MIDIA_H

#include "Acervo.h"

class Midia : public Acervo
{
	private :
        string Tipo;
        
    public:
    	Midia();
        ~Midia();
        
        string getTipo();
    
        void setTipo();
        
        void imprimirInformacoes();
        void informacoesItem();
        
    protected:
};

#endif
