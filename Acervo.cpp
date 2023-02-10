#include "Acervo.h"


Acervo::Acervo()
{
}

Acervo::~Acervo()
{
}

string Acervo::getAutor(){//Get Fun��es de chamada das variaveis
	return autor;
}
string Acervo::getTitulo(){
	return titulo;
}
int Acervo::getEdicao(){
	return edicao;
}
string Acervo::getCidade(){
	return cidade;
}
string Acervo::getEditora(){
	return editora;
}
int Acervo::getAno(){
	return ano;
}
string Acervo::getAssunto(){
	return assunto;
}
string Acervo::getPalavraChave(){
	return palavraChave;
}
string Acervo::getCdu(){
	return cdu;
}
int Acervo::getExemplares(){
	return exemplares;
}

int Acervo::getexemplares_Declarados(){
	return exemplares_Declarados;
}
int Acervo::getId(){
	return id;
}
		
void Acervo::setAutor(string autor){//SET mudan�a de valores nas variaveis
	this->autor = autor;
}
void Acervo::setTitulo(string titulo){
	this->titulo = titulo;
}
void Acervo::setEdicao(int edicao){
	this->edicao = edicao;
}
void Acervo::setCidade(string cidade){
	this->cidade = cidade;
}
void Acervo::setEditora(string editora){
	this->editora = editora;
}
void Acervo::setAno(int ano){
	this->ano = ano;
}
void Acervo::setAssunto(string assunto){
	this->assunto = assunto;
}
void Acervo::setPalavraChave(string palavraChave){
	this->palavraChave = palavraChave;
}
void Acervo::setCdu(string cdu){ 
	while(cdu.size() != 13){ //restri��o no variavel cdu 
		cout << "CDU precisa ter 13 digitos" << endl;
		cout << "Entre com o CDU: ";
		getline(cin, cdu);
		cin.clear();
		fflush(stdin);
		Acervo::setCdu(cdu);
	}
	this->cdu = cdu;
}
void Acervo::setExemplares(int exemplares){ //Variavel para o controle atual de estoque
	this->exemplares = exemplares;
}

void Acervo::setexemplares_Declarados(int exemplares_Declarados){ //Variavel para controle da quantidade maxima
	this->exemplares_Declarados=exemplares_Declarados;
}
void Acervo::setId(int id){
	this->id= id;
}

void Acervo::imprimirInformacoes(){ //Fun��o para imprimir a parte superior da fichaCatalografica
	cout <<"Autor:"<< autor << endl;
	cout <<"Titulo da obra:"<<titulo << " - " << edicao << "� edi��o " << " - " << cidade << ": " << editora << ", " << ano <<"."<< endl;
	
}
// No exemplo a fichaCatalografica demonstrava valores das sub classes no meio , devido a isso essas duas fun��es de imprenss�o

void Acervo::imprimirInformacoes2(){ //Fun��o para imprimir a parte inferior da fichaCatalografica
	cout <<"Assunto:"<< assunto << " . " << " Palavra chave : " <<  palavraChave << " Titulo: " << titulo << endl << "				 CDU: " << cdu <<endl;
}
void Acervo::informacoesItem(){
	cout<<"ID: "<<id<<endl<<"Autor : "<<autor<<endl<<"Titulo: "<<titulo<<endl;
	cout<<"Edi��o: "<<edicao<<"�"<<endl<<"Cidade: "<<cidade<<endl;
	cout<<"Editora: "<<editora<<endl<<"Ano: "<<ano<<endl;
	cout<<"CDU: "<<cdu<<endl<<"Assunto: "<<assunto<<endl;
	cout<<"Palavra :"<<palavraChave<<endl<<"Quantidade atual:"<<exemplares<<endl<<"Quantidade Total:"<<exemplares_Declarados<<endl;
}
