#ifndef TRABALHODECONCLUSAO_H
#define TRABALHODECONCLUSAO_H

#include "Acervo.h"

class TrabalhoDeConclusao : public Acervo
{
	private:
        int paginas;
        int tamanhoPaginas;
        string Tipo;
    public:
		TrabalhoDeConclusao();
        ~TrabalhoDeConclusao();
        
        int getPaginas();
        int getTamanhoPaginas();
        string getTipo();

        void setPaginas(int paginas);
        void setTamanhoPaginas(int tamanhoPaginas);
        void setTipo();
        
        void imprimirInformacoes();
        void informacoesItem();
        
    protected:
};

#endif
