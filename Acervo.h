#ifndef ACERVO_H
#define ACERVO_H

#include <iostream>
#include <string>

using namespace std;

class Acervo
{
	private:
		string autor;
		string titulo;
		int edicao;
		string cidade;
		string editora;
		int ano;
		string assunto;
		string palavraChave;
		string cdu;
		int exemplares;
		int exemplares_Declarados;
		int id;
		
	public:
		
		Acervo();
		~Acervo();
		
		string getAutor();
		string getTitulo();
		int getEdicao();
		string getCidade();
		string getEditora();
		int getAno();
		string getAssunto();
		string getPalavraChave();
		string getCdu();
		int getExemplares();
		int getexemplares_Declarados();
		int getId();
		
		void setAutor(string autor);
		void setTitulo(string titulo);
		void setEdicao(int edicao);
		void setCidade(string cidade);
		void setEditora(string editora);
		void setAno(int ano);
		void setAssunto(string assunto);
		void setPalavraChave(string palavraChave);
		void setCdu(string cdu);
		void setExemplares(int exemplares);
		void setexemplares_Declarados(int exemplares_Declarados);
		void setId(int id);
		
		virtual void imprimirInformacoes();
		void imprimirInformacoes2();  //Criado para configurar corretamente o exemplo exibido
		virtual void informacoesItem();
	protected:
};

#endif
