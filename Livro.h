#ifndef LIVRO_H
#define LIVRO_H

#include "Acervo.h"

class Livro : public Acervo
{		
 	private:
        int paginas;
        int tamanhoPaginas;
        string ISBN;
        
    public:
		Livro();
        ~Livro();
        
        int getPaginas();
        int getTamanhoPaginas();
        string getISBN();
        
        void setPaginas(int paginas);
        void setTamanhoPaginas(int tamanhoPaginas);
        void setISBN();
        
        void imprimirInformacoes();
        void informacoesItem();
        
    protected:
};

#endif
