#include <iostream>
#include <vector>
#include <conio.h>
#include <string.h>

#include "Livro.h"
#include "Periodico.h"
#include "TrabalhoDeConclusao.h"
#include "Relatorio.h"
#include "Midia.h"
#include "Cartaz.h"
#include "Mapa.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void cadastrarAcervo(Acervo *acervo){//Criação das variaveis na classe mae 
	
	cout << "Entre com o título da obra: ";
	string titulo;
	getline(cin, titulo);
	acervo->setTitulo(titulo);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o autor da obra: "; 
	string autor;
	getline(cin, autor);
	acervo->setAutor(autor);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o número da edição: ";
	int edicao;
	cin >> edicao;
	acervo->setEdicao(edicao);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com a cidade: ";
	string cidade;
	getline(cin, cidade);
	acervo->setCidade(cidade);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o nome da editora: ";
	string editora;
	getline(cin, editora);
	acervo->setEditora(editora);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o ano da puclicação: ";
	int ano;
	cin >> ano;
	acervo->setAno(ano);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o CDU: ";
	string cdu;
	getline(cin, cdu);
	acervo->setCdu(cdu);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o assunto da obra: ";
	string assunto;
	getline(cin, assunto);
	acervo->setAssunto(assunto);
	cin.clear();
	fflush(stdin);
	
	
	cout << "Entre com a palavra chave: ";
	string palavra;
	getline(cin, palavra);
	acervo->setPalavraChave(palavra);
	cin.clear();
	fflush(stdin);
	//PALAVRA-CHAVE
	int exemplares;
	do{
		cout << "Entre com a quantidade de exemplares: ";
		cin >> exemplares;
		acervo->setExemplares(exemplares);
		acervo->setexemplares_Declarados(exemplares);
		cin.clear();
		fflush(stdin);
	}while(exemplares<0);
	
}

void cadastrarLivro(Livro *li){ // cadastro da sub classe livro
	
	cout << "			Cadastro de Livro" << endl;
	
	cadastrarAcervo(li);
	
	cout << "Entre com o número de páginas: ";
	int paginas;
	cin >> paginas;
	li->setPaginas(paginas);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o tamanho das páginas (cm): ";
	int tamanhoPaginas;
	cin >> tamanhoPaginas;
	li->setTamanhoPaginas(tamanhoPaginas);
	cin.clear();
	fflush(stdin);
	
	li->setISBN();//CHAMADA para a variavel especifica
	
	cout << "Cadastro da obra '" << li->getTitulo() << "' realizado com sucesso!" << endl << endl; //verificação especifica do item criado
}

void cadastrarPeriodico(Periodico *pe){// cadastro da sub classe periodico
	
	cout << "			Cadastro de Periódico" << endl;
	
	cadastrarAcervo(pe);
	
	cout << "Entre com o número de páginas: ";
	int paginas;
	cin >> paginas;
	pe->setPaginas(paginas);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o tamanho das páginas (cm): ";
	int tamanhoPaginas;
	cin >> tamanhoPaginas;
	pe->setTamanhoPaginas(tamanhoPaginas);
	cin.clear();
	fflush(stdin);
	
	pe->setISSN();
	//Chamadas de funções especificas
	pe->setTipo();
	
	cout << "Cadastro da obra '" << pe->getTitulo() << "' realizado com sucesso!" << endl << endl;
}

void cadastrarTrabalhoDeConclusao(TrabalhoDeConclusao *tc){// cadastro da sub classe Trabalho de conclução
	
	cout << "			Cadastro de Trabalho de Conclusão" << endl;

	cadastrarAcervo(tc);
	
	cout << "Entre com o número de páginas: ";
	int paginas;
	cin >> paginas;
	tc->setPaginas(paginas);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o tamanho das páginas (cm): ";
	int tamanhoPaginas;
	cin >> tamanhoPaginas;
	tc->setTamanhoPaginas(tamanhoPaginas);
	cin.clear();
	fflush(stdin);
	
	tc->setTipo();
	
	cout << "Cadastro da obra '" << tc->getTitulo() << "' realizado com sucesso!" << endl << endl;
}

void cadastrarRelatorio(Relatorio *re){// cadastro da sub classe Relatorio
	
	cout << "			Cadastro de Relatório" << endl;
	
	cadastrarAcervo(re);
	
	cout << "Entre com o número de páginas: ";
	int paginas;
	cin >> paginas;
	re->setPaginas(paginas);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o tamanho das páginas (cm): ";
	int tamanhoPaginas;
	cin >> tamanhoPaginas;
	re->setTamanhoPaginas(tamanhoPaginas);
	cin.clear();
	fflush(stdin);
	
	cout << "Cadastro da obra '" << re->getTitulo() << "' realizado com sucesso!" << endl << endl;
}

void cadastrarMidia(Midia *mi){// cadastro da sub classe Midia
	
	cout << "			Cadastro de Midía" << endl;
	
	cadastrarAcervo(mi);
	
	mi->setTipo();
	
	cout << "Cadastro da obra '" << mi->getTitulo() << "' realizado com sucesso!" << endl << endl;
}

void cadastrarCartaz(Cartaz *ca){// cadastro da sub classe Cartaz
	
	cout << "			Cadastro de Cartaz" << endl;
	
	cadastrarAcervo(ca);
	
	cout << "Entre com o número de páginas: ";
	int paginas;
	cin >> paginas;
	ca->setPaginas(paginas);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o tamanho das páginas (cm): ";
	int tamanhoPaginas;
	cin >> tamanhoPaginas;
	ca->setTamanhoPaginas(tamanhoPaginas);
	cin.clear();
	fflush(stdin);
	
	cout << "Cadastro da obra '" << ca->getTitulo() << "' realizado com sucesso!" << endl << endl;
}

void cadastrarMapa(Mapa *ma){// cadastro da sub classe Mapa

	
	cout << "			Cadastro de Mapa" << endl;
	
	cadastrarAcervo(ma);
	
	cout << "Entre com o número de páginas: ";
	int paginas;
	cin >> paginas;
	ma->setPaginas(paginas);
	cin.clear();
	fflush(stdin);
	
	cout << "Entre com o tamanho das páginas (cm): ";
	int tamanhoPaginas;
	cin >> tamanhoPaginas;
	ma->setTamanhoPaginas(tamanhoPaginas);
	cin.clear();
	fflush(stdin);
	
	cout << "Cadastro da obra '" << ma->getTitulo() << "' realizado com sucesso!" << endl << endl;
}

void listarItens(vector <Acervo *> &listAcervo){//Função lista os item em tipos
	int opcao;
	do{
		cout << "			Biblioteca Universitária" << endl;
		cout << "1 - Listar todos os itens do acervo" << endl;
		cout << "2 - Listar Livros" << endl;
		cout << "3 - Listar Periódicos" << endl;
		cout << "4 - Listar Trabalhos de Conclusão" << endl;
		cout << "5 - Listar Relatórios" << endl;
		cout << "6 - Listar Mídias" << endl;
		cout << "7 - Listar Cartazes" << endl;
		cout << "8 - Listar Mapas" << endl;
		cout << "9 - Voltar ao menu anterior" << endl;
		cout << "Entre com a opção desejada: ";
		cin >> opcao;
		cin.clear();
		fflush(stdin);
								
		switch(opcao){ //Escolhido os tipos essa função exibe o ID e o titulo do presente item
			case 1:{
				for(vector <Acervo *>::iterator it=listAcervo.begin(); it!=listAcervo.end();it++){ //Função de busca no acervo utilizando it
					cout<<"ID: "<<(*it)->getId()<< "Titulo: "<<(*it)->getTitulo()<<endl;
				}		
				break;
			}
			case 2:{
				for(vector <Acervo *>::iterator it=listAcervo.begin(); it!=listAcervo.end();it++){//Função de busca no acervo utilizando it
					if(dynamic_cast<Livro*>((*it))){
						cout<<"ID: "<<(*it)->getId()<< "Titulo: "<<(*it)->getTitulo()<<endl;
					}	
				}					
				break;
			}
			case 3:{
				for(vector <Acervo *>::iterator it=listAcervo.begin(); it!=listAcervo.end();it++){//Função de busca no acervo utilizando it
					if(dynamic_cast<Periodico*>((*it))){
						cout<<"ID: "<<(*it)->getId()<< "Titulo: "<<(*it)->getTitulo()<<endl;
					}	
				}							
				break;
			}
			case 4:{
				for(vector <Acervo *>::iterator it=listAcervo.begin(); it!=listAcervo.end();it++){//Função de busca no acervo utilizando it
					if(dynamic_cast<TrabalhoDeConclusao*>((*it))){
						cout<<"ID: "<<(*it)->getId()<< "Titulo: "<<(*it)->getTitulo()<<endl;
					}	
				}									
				break;
			}
			case 5:{
				for(vector <Acervo *>::iterator it=listAcervo.begin(); it!=listAcervo.end();it++){//Função de busca no acervo utilizando it
					if(dynamic_cast<Relatorio*>((*it))){
						cout<<"ID: "<<(*it)->getId()<< "Titulo: "<<(*it)->getTitulo()<<endl;
					}	
				}								
				break;
			}
			case 6:{
				for(vector <Acervo *>::iterator it=listAcervo.begin(); it!=listAcervo.end();it++){//Função de busca no acervo utilizando it
					if(dynamic_cast<Midia*>((*it))){
						cout<<"ID: "<<(*it)->getId()<< "Titulo: "<<(*it)->getTitulo()<<endl;
					}	
				}										
				break;
			}
			case 7:{
				for(vector <Acervo *>::iterator it=listAcervo.begin(); it!=listAcervo.end();it++){//Função de busca no acervo utilizando it
					if(dynamic_cast<Cartaz*>((*it))){
						cout<<"ID: "<<(*it)->getId()<< "Titulo: "<<(*it)->getTitulo()<<endl;
					}	
				}									
				break;
			}
			case 8:{
				for(vector <Acervo *>::iterator it=listAcervo.begin(); it!=listAcervo.end();it++){//Função de busca no acervo utilizando it
					if(dynamic_cast<Mapa*>((*it))){
						cout<<"ID: "<<(*it)->getId()<< "Titulo: "<<(*it)->getTitulo()<<endl;
					}	
				}											
				break;
			}
			case 9:{
				cout << endl << endl;			
				break;
			}
			default:
				cout << "Opção inválida! \nEntre com uma opção válida" << endl << endl; 
			}
		}while(opcao != 9);
}

Acervo* buscarItem(vector<Acervo *> &listAcervo){ //procurar um item especifico pelo ID , no arcevo 
	cout << "Entre com o ID do item: ";
	int id;
	cin >> id;
	cin.clear();
	fflush(stdin);
	for(vector<Acervo *>::iterator it = listAcervo.begin(); it != listAcervo.end(); it++){//Função de busca no acervo utilizando it
		if(id == (*it)->getId()){
			return (*it); //Retorna a variavel que o it esta a apontar
		}
	}
	return NULL;
}

void fichaCatalografica(vector <Acervo *> &listAcervo){ //Função para procurar um item expecifico e imprimir sua fichaCatalografica
	
	Acervo *item = buscarItem(listAcervo);
	
	if(item != NULL){
		cout << "-----------------------------------------------------------------------------------------------------" << endl << endl;
		if(dynamic_cast<Livro*>(item)){//Utiliza o dynamic_cast para determinar o tipo de item a ser imprimido
			cout<<"Tipo do item de acervo: Livro"<<endl;
		}else if(dynamic_cast<Periodico*>(item)){
			cout<<"Tipo do item de acervo: Periodico"<<endl;		
		}else if(dynamic_cast<TrabalhoDeConclusao*>(item)){
			cout<<"Tipo do item de acervo: Trabalho de conclusão"<<endl;		
		}else if(dynamic_cast<Relatorio*>(item)){
			cout<<"Tipo do item de acervo: Relatorio"<<endl;		
		}else if(dynamic_cast<Midia*>(item)){
			cout<<"Tipo do item de acervo: Midia"<<endl;		
		}else if(dynamic_cast<Cartaz*>(item)){
			cout<<"Tipo do item de acervo: Cartaz"<<endl;			
		}else if(dynamic_cast<Mapa*>(item)){
			cout<<"Tipo do item de acervo: Mapa"<<endl;			
		}
		item->imprimirInformacoes();
		cout<<endl;
		cout << "-----------------------------------------------------------------------------------------------------" <<endl;
	}else{
		cout << "ID não encontrado" << endl << endl;
	}
}

void fichaCatalografica_todos_por_tipo(vector <Acervo *> &listAcervo){//Função que imprime a ficha catalografica de um mesmo tipo de item do acervo
	cout<<"Selecione o tipo de item do acervo:"<<endl;
	cout << "1 - Livro" << endl;
	cout << "2 - Periódico" << endl;
	cout << "3 - Trabalho de Conclusão" << endl;
	cout << "4 - Relatório" << endl;
	cout << "5 - Mídia" << endl;
	cout << "6 - Cartaz" << endl;
	cout << "7 - Mapa" << endl;
	cout << "8 - Voltar ao menu anterior" << endl;
	int op;
	cin>>op;
	cin.clear();
	fflush(stdin);
	for(vector<Acervo *>::iterator it = listAcervo.begin(); it != listAcervo.end(); it++){
		if((*it) != NULL){
			cout << "-----------------------------------------------------------------------------------------------------" << endl << endl;
			if(dynamic_cast<Livro*>(*it)&&op==1){//verifica o tipo do item e o parametro solicitado no op para verificar qual dos item deve ser impresso
				cout<<"Tipo do item de acervo: Livro"<<endl;
				(*it)->imprimirInformacoes();
			}else if(dynamic_cast<Periodico*>(*it)&&op==2){
				cout<<"Tipo do item de acervo: Periodico"<<endl;
				(*it)->imprimirInformacoes();		
			}else if(dynamic_cast<TrabalhoDeConclusao*>(*it)&&op==3){
				cout<<"Tipo do item de acervo: Trabalho de conclusão"<<endl;		
				(*it)->imprimirInformacoes();
			}else if(dynamic_cast<Relatorio*>(*it)&&op==4){
				cout<<"Tipo do item de acervo: Relatorio"<<endl;
				(*it)->imprimirInformacoes();		
			}else if(dynamic_cast<Midia*>(*it)&&op==5){
				cout<<"Tipo do item de acervo: Midia"<<endl;
				(*it)->imprimirInformacoes();		
			}else if(dynamic_cast<Cartaz*>(*it)&&op==6){
				cout<<"Tipo do item de acervo: Cartaz"<<endl;
				(*it)->imprimirInformacoes();			
			}else if(dynamic_cast<Mapa*>(*it)&&op==7){
				cout<<"Tipo do item de acervo: Mapa"<<endl;
				(*it)->imprimirInformacoes();			
			}
			cout<<endl;
			cout << "-----------------------------------------------------------------------------------------------------" <<endl;
		}	
	}
	
}

void cadastrarItem(vector<Acervo *> &listAcervo){//Menu de cadastro com as opções que a biblioteca possui no momento

	int opcao,id;
	do{
		cout << "			Biblioteca Universitária- Cadastro " << endl;
		cout << "1 - Cadastrar Livro" << endl;
		cout << "2 - Cadastrar Periódico" << endl;
		cout << "3 - Cadastrar Trabalho de Conclusão" << endl;
		cout << "4 - Cadastrar Relatório" << endl;
		cout << "5 - Cadastrar Mídia" << endl;
		cout << "6 - Cadastrar Cartaz" << endl;
		cout << "7 - Cadastrar Mapa" << endl;
		cout << "8 - Voltar ao menu anterior" << endl;
		cout << "Entre com a opção desejada: ";
		cin >> opcao;
		cin.clear();
		fflush(stdin);
		vector<Acervo *>::iterator it=listAcervo.begin();
		if(it == listAcervo.end()){
			id=1;
		}else{
			for(it; it != listAcervo.end(); it++){
					id=(*it)->getId();
					id++;
			}
		}
		switch(opcao){
			case 1:{
				Livro *li = new Livro();
				cadastrarLivro(li);
				li->setId(id);
				listAcervo.push_back(li);
				break;
			}
			case 2:{
				Periodico *pe = new Periodico();
				cadastrarPeriodico(pe);
				pe->setId(id);
				listAcervo.push_back(pe);
				break;
			}
			case 3:{
				TrabalhoDeConclusao *tc = new TrabalhoDeConclusao();
				cadastrarTrabalhoDeConclusao(tc);
				tc->setId(id);
				listAcervo.push_back(tc);
				break;
			}
			case 4:{
				Relatorio *re = new Relatorio();
				cadastrarRelatorio(re);
				re->setId(id);
				listAcervo.push_back(re);
				break;
			}
			case 5:{
				Midia *mi = new Midia();
				cadastrarMidia(mi);
				mi->setId(id);
				listAcervo.push_back(mi);
				break;
			}
			case 6:{
				Cartaz *ca = new Cartaz();
				cadastrarCartaz(ca);
				ca->setId(id);
				listAcervo.push_back(ca);
				break;
			}
			case 7:{
				Mapa *ma = new Mapa();
				cadastrarMapa(ma);
				ma->setId(id);
				listAcervo.push_back(ma);
				break;
			}
			case 8:{
				cout << endl << endl;
				break;
			}
		}
	}while(opcao != 8);
}

void deletarItem(vector<Acervo *> &listAcervo){//Deleta o item presente no acervo
	cout << "Entre com o ID do item: ";
	int id;
	cin >> id;
	cin.clear();
	fflush(stdin);
	char check='0';
	for(vector<Acervo *>::iterator it=listAcervo.begin(); it != listAcervo.end(); it++){//Função de busca no acervo utilizando it
		if((*it)->getId()==id){
			cout << "Obra encontrada! "<<(*it)->getTitulo() <<" Deseja realmente excluir?(S/N): ";
			cin >> check;
			cin.clear();
			fflush(stdin);
			if(check=='S'||check=='s'){
					listAcervo.erase(it); // Eliminação do valore da variavel presente no it 
					cout<<"Obra deletada com sucesso!"<<endl;
					break; 
			}
		}	
	}
	if(check=='0'){
		cout<<"Obra não encontrada!!"<<endl;
	}
}

void emprestarItem(vector<Acervo *> &listAcervo){//Função para imprestar item 
	cout<<"			Emprestar item 			"<<endl;
	Acervo *item= buscarItem(listAcervo);
	if(item!=NULL){
		item->informacoesItem();
		int quant=item->getExemplares();
		if(quant==0){
			cout<<"Quantidade indisponivel na biblioteca"<<endl;
		}else{
			quant=quant-1;
			item->setExemplares(quant);
			cout<<"Exemplar: "<<item->getTitulo()<<" emprestado!!"<<endl;
		}
	}
}

void pesquisarItem(vector<Acervo *> &listAcervo){ //Pesquisar item presente no acervo
	Acervo *item = buscarItem(listAcervo);
	if(item!=NULL){
		if(dynamic_cast<Livro*>(item)){
			cout<<"Tipo do item de acervo: Livro"<<endl;
		}else if(dynamic_cast<Periodico*>(item)){
			cout<<"Tipo do item de acervo: Periodico"<<endl;		
		}else if(dynamic_cast<TrabalhoDeConclusao*>(item)){
			cout<<"Tipo do item de acervo: Trabalho de conclusão"<<endl;		
		}else if(dynamic_cast<Relatorio*>(item)){
			cout<<"Tipo do item de acervo: Relatorio"<<endl;		
		}else if(dynamic_cast<Midia*>(item)){
			cout<<"Tipo do item de acervo: Midia"<<endl;		
		}else if(dynamic_cast<Cartaz*>(item)){
			cout<<"Tipo do item de acervo: Cartaz"<<endl;			
		}else if(dynamic_cast<Mapa*>(item)){
			cout<<"Tipo do item de acervo: Mapa"<<endl;			
		}
		item->informacoesItem();//Possui alguns parametros diferentes da ficha catalografica , portanto outra função
	}
}

void alterarItem(vector<Acervo *> &listAcervo){//Alterar item
	Acervo *item=buscarItem(listAcervo);
	if(item!=NULL){
		cout<<"Obra: "<<item->getTitulo()<<" encontrada! Deseja mesmo alterar(S/N)?"<<endl;
		char t;
		int op;
		cin>>t;
		string nome;//TODOS OS PARAMETROS NECESSARIOS PARA AUTERAR OS DADOS
		string titulo;
		int ed;
		string cidade;
		string editora;
		int ano;
		string CDU;
		string assunto;
		string PALAVRA;
		int quant;
		int pag;
		int tamPag;
		cin.clear();
		fflush(stdin);
		if(t=='s'||t=='S'){
			if(dynamic_cast<Livro*>(item)){//Todos os tipos presentes no acervo com seus dados comuns e especiais , contanto um menu de opções cada
				cout<<"Cadastro de Livro"<<endl;
				item->imprimirInformacoes();
				do{
					cout<<"Opções do Livro"<<endl;					
					cout<<"Escolha a opção que deseja alterar:"<<endl;
					cout<<"1-Autor"<<endl;
					cout<<"2-Titulo"<<endl;
					cout<<"3-Edição"<<endl;
					cout<<"4-Cidade"<<endl;
					cout<<"5-Editora"<<endl;
					cout<<"6-Ano"<<endl;
					cout<<"7-CDU"<<endl;
					cout<<"8-Assunto"<<endl;
					cout<<"9-Palavra-Chave"<<endl;
					cout<<"10-Quantidade"<<endl;
					cout<<"11-ISBN"<<endl;
					cout<<"12-Quantidade de paginas"<<endl;
					cout<<"13-Tamanho das paginas"<<endl;
					cout<<"14-Todos"<<endl;
					cout<<"15-SAIR"<<endl;
					cin>>op;
					cin.clear();
					fflush(stdin);
					switch(op){
						case 1:
							cout<<"Entre com o nome do Autor:"<<endl;
							getline(cin, nome);
							cin.clear();
							fflush(stdin);
							item->setAutor(nome);
							break;
						case 2:
							cout<<"Entre com o titulo:"<<endl;
							getline(cin, titulo);
							cin.clear();
							fflush(stdin);
							item->setTitulo(titulo);							
							break;
						case 3:
							cout<<"Entre com a edição:"<<endl;
							cin>>ed;
							cin.clear();
							fflush(stdin);
							item->setEdicao(ed);							
							break;
						case 4:
							cout<<"Entre com o nome do Cidade:"<<endl;
							getline(cin, cidade);
							cin.clear();
							fflush(stdin);
							item->setCidade(cidade);							
							break;
						case 5:
							cout<<"Entre com o nome da Editora:"<<endl;
							getline(cin, editora);
							cin.clear();
							fflush(stdin);
							item->setEditora(editora);							
							break;
						case 6:
							cout<<"Entre com o ano:"<<endl;
							cin>>ano;
							cin.clear();
							fflush(stdin);
							item->setAno(ano);							
							break;
						case 7:
							cout<<"Entre com o CDU:"<<endl;
							getline(cin,CDU);
							cin.clear();
							fflush(stdin);
							item->setCdu(CDU);							
							break;
						case 8:
							cout<<"Entre com o Assunto:"<<endl;
							getline(cin, assunto);
							cin.clear();
							fflush(stdin);
							item->setAssunto(assunto);							
							break;
						case 9:
							cout<<"Entre com a palavra chave:"<<endl;
							getline(cin, PALAVRA);
							cin.clear();
							fflush(stdin);
							item->setPalavraChave(PALAVRA);							
							break;
						case 10:
							cout<<"Entre com a quantidade de exemplares que chegaram:"<<endl;
							cin>>quant;
							cin.clear();
							fflush(stdin);
							if(quant>0){
								int estoque_total=item->getexemplares_Declarados();
								int estoque=item->getExemplares();
								item->setExemplares(estoque+quant);
								item->setexemplares_Declarados(estoque_total+quant);
							}						
							break;
						case 11:
							dynamic_cast<Livro*>(item)->setISBN();					
							break;
						case 12:
							cout<<"Entre com a quantidade de paginas:"<<endl;
							cin>>pag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Livro*>(item)->setPaginas(pag);								
							}
							break;
						case 13:
							cout<<"Entre com o tamanho de paginas:"<<endl;
							cin>>tamPag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Livro*>(item)->setTamanhoPaginas(tamPag);								
							}				
							break;
						case 14:
							cadastrarAcervo(item);
							dynamic_cast<Livro*>(item)->setISBN();
							cout<<"Entre com a quantidade de paginas:"<<endl;
							cin>>pag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Livro*>(item)->setPaginas(pag);								
							}
							cout<<"Entre com o tamanho de paginas:"<<endl;
							cin>>tamPag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Livro*>(item)->setTamanhoPaginas(tamPag);								
							}																
							break;
					}
				}while(op!=15);
			}else if(dynamic_cast<Periodico*>(item)){
				cout<<"Cadastro de Periodico"<<endl;
				item->imprimirInformacoes();
				do{
					cout<<"Opções do Periodico"<<endl;					
					cout<<"Escolha a opção que deseja alterar:"<<endl;
					cout<<"1-Autor"<<endl;
					cout<<"2-Titulo"<<endl;
					cout<<"3-Edição"<<endl;
					cout<<"4-Cidade"<<endl;
					cout<<"5-Editora"<<endl;
					cout<<"6-Ano"<<endl;
					cout<<"7-CDU"<<endl;
					cout<<"8-Assunto"<<endl;
					cout<<"9-Palavra-Chave"<<endl;
					cout<<"10-Quantidade"<<endl;
					cout<<"11-ISSN"<<endl;
					cout<<"12-TIPO de periodico"<<endl;
					cout<<"13-Quantidade de paginas"<<endl;
					cout<<"14-Tamanho das paginas"<<endl;
					cout<<"15-Todos"<<endl;	
					cout<<"16-SAIR"<<endl;
					cin>>op;
					cin.clear();
					fflush(stdin);
					switch(op){
						case 1:
							cout<<"Entre com o nome do Autor:"<<endl;
							getline(cin,nome);
							cin.clear();
							fflush(stdin);
							item->setAutor(nome);
							break;
						case 2:
							cout<<"Entre com o titulo:"<<endl;
							getline(cin, titulo);
							cin.clear();
							fflush(stdin);
							item->setTitulo(titulo);							
							break;
						case 3:
							cout<<"Entre com a edição:"<<endl;
							cin>>ed;
							cin.clear();
							fflush(stdin);
							item->setEdicao(ed);							
							break;
						case 4:
							cout<<"Entre com o nome do Cidade:"<<endl;
							getline(cin, cidade);
							cin.clear();
							fflush(stdin);
							item->setCidade(cidade);							
							break;
						case 5:
							cout<<"Entre com o nome da Editora:"<<endl;
							getline(cin, editora);
							cin.clear();
							fflush(stdin);
							item->setEditora(editora);							
							break;
						case 6:
							cout<<"Entre com o ano:"<<endl;
							cin>>ano;
							cin.clear();
							fflush(stdin);
							item->setAno(ano);							
							break;
						case 7:
							cout<<"Entre com o CDU:"<<endl;
							getline(cin, CDU);
							cin.clear();
							fflush(stdin);
							item->setCdu(CDU);							
							break;
						case 8:
							cout<<"Entre com o Assunto:"<<endl;
							getline(cin, assunto);
							cin.clear();
							fflush(stdin);
							item->setAssunto(assunto);							
							break;
						case 9:
							cout<<"Entre com a palavra chave:"<<endl;
							getline(cin, PALAVRA);
							cin.clear();
							fflush(stdin);
							item->setPalavraChave(PALAVRA);							
							break;
						case 10:
							cout<<"Entre com a quantidade de exemplares que chegaram:"<<endl;
							cin>>quant;
							cin.clear();
							fflush(stdin);
							if(quant>0){
								int estoque_total=item->getexemplares_Declarados();
								int estoque=item->getExemplares();
								item->setExemplares(estoque+quant);
								item->setexemplares_Declarados(estoque_total+quant);
							}						
							break;
						case 11:
							dynamic_cast<Periodico*>(item)->setISSN();					
							break;
						case 12:
							dynamic_cast<Periodico*>(item)->setTipo();
							break;
						case 13:
							cout<<"Entre com a quantidade de paginas:"<<endl;
							cin>>pag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Periodico*>(item)->setPaginas(pag);								
							}
							break;
						case 14:
							cout<<"Entre com o tamanho de paginas:"<<endl;
							cin>>tamPag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Periodico*>(item)->setTamanhoPaginas(tamPag);								
							}
						case 15:
							cadastrarAcervo(item);
							dynamic_cast<Periodico*>(item)->setISSN();
							dynamic_cast<Periodico*>(item)->setTipo();
							cout<<"Entre com a quantidade de paginas:"<<endl;
							cin>>pag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Periodico*>(item)->setPaginas(pag);								
							}
							cout<<"Entre com o tamanho de paginas:"<<endl;
							cin>>tamPag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Periodico*>(item)->setTamanhoPaginas(tamPag);								
							}													
							break;
					}
				}while(op!=16);		
			}else if(dynamic_cast<TrabalhoDeConclusao*>(item)){
				cout<<"Cadastro de Trabalho de conclusão"<<endl;
				item->imprimirInformacoes();
				do{
					cout<<"Opções do Trabalhos de conclusão"<<endl;					
					cout<<"Escolha a opção que deseja alterar:"<<endl;
					cout<<"1-Autor"<<endl;
					cout<<"2-Titulo"<<endl;
					cout<<"3-Edição"<<endl;
					cout<<"4-Cidade"<<endl;
					cout<<"5-Editora"<<endl;
					cout<<"6-Ano"<<endl;
					cout<<"7-CDU"<<endl;
					cout<<"8-Assunto"<<endl;
					cout<<"9-Palavra-Chave"<<endl;
					cout<<"10-Quantidade"<<endl;
					cout<<"11-Quantidade de paginas"<<endl;
					cout<<"12-Tamanho das paginas"<<endl;
					cout<<"13-TIPO de periodico"<<endl;
					cout<<"14-Todos"<<endl;	
					cout<<"15-SAIR"<<endl;
					cin>>op;
					cin.clear();
					fflush(stdin);
					switch(op){
						case 1:
							cout<<"Entre com o nome do Autor:"<<endl;
							getline(cin, nome);
							cin.clear();
							fflush(stdin);
							item->setAutor(nome);
							break;
						case 2:
							cout<<"Entre com o titulo:"<<endl;
							getline(cin, titulo);
							cin.clear();
							fflush(stdin);
							item->setTitulo(titulo);							
							break;
						case 3:
							cout<<"Entre com a edição:"<<endl;
							cin>>ed;
							cin.clear();
							fflush(stdin);
							item->setEdicao(ed);							
							break;
						case 4:
							cout<<"Entre com o nome do Cidade:"<<endl;
							getline(cin, cidade);
							cin.clear();
							fflush(stdin);
							item->setCidade(cidade);							
							break;
						case 5:
							cout<<"Entre com o nome da Editora:"<<endl;
							getline(cin, editora);
							cin.clear();
							fflush(stdin);
							item->setEditora(editora);							
							break;
						case 6:
							cout<<"Entre com o ano:"<<endl;
							cin>>ano;
							cin.clear();
							fflush(stdin);
							item->setAno(ano);							
							break;
						case 7:
							cout<<"Entre com o CDU:"<<endl;
							getline(cin, CDU);
							cin.clear();
							fflush(stdin);
							item->setCdu(CDU);							
							break;
						case 8:
							cout<<"Entre com o Assunto:"<<endl;
							getline(cin, assunto);
							cin.clear();
							fflush(stdin);
							item->setAssunto(assunto);							
							break;
						case 9:
							cout<<"Entre com a palavra chave:"<<endl;
							getline(cin, PALAVRA);
							cin.clear();
							fflush(stdin);
							item->setPalavraChave(PALAVRA);							
							break;
						case 10:
							cout<<"Entre com a quantidade de exemplares que chegaram:"<<endl;
							cin>>quant;
							cin.clear();
							fflush(stdin);
							if(quant>0){
								int estoque_total=item->getexemplares_Declarados();
								int estoque=item->getExemplares();
								item->setExemplares(estoque+quant);
								item->setexemplares_Declarados(estoque_total+quant);
							}						
							break;
						case 11:
							cout<<"Entre com a quantidade de paginas:"<<endl;
							cin>>pag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<TrabalhoDeConclusao*>(item)->setPaginas(pag);								
							}
							break;
						case 12:
							cout<<"Entre com o tamanho de paginas:"<<endl;
							cin>>tamPag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<TrabalhoDeConclusao*>(item)->setTamanhoPaginas(tamPag);								
							}				
							break;
						case 13:
							dynamic_cast<TrabalhoDeConclusao*>(item)->setTipo();
							break;
						case 14:
							cadastrarAcervo(item);
							dynamic_cast<TrabalhoDeConclusao*>(item)->setTipo();	
							cout<<"Entre com a quantidade de paginas:"<<endl;
							cin>>pag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<TrabalhoDeConclusao*>(item)->setPaginas(pag);								
							}
							cout<<"Entre com o tamanho de paginas:"<<endl;
							cin>>tamPag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<TrabalhoDeConclusao*>(item)->setTamanhoPaginas(tamPag);								
							}													
							break;
					}
				}while(op!=15);		
			}else if(dynamic_cast<Relatorio*>(item)){
				cout<<"Cadastro de Relatorio"<<endl;
				item->imprimirInformacoes();
				do{
					cout<<"Opções do Relatorio"<<endl;					
					cout<<"Escolha a opção que deseja alterar:"<<endl;
					cout<<"1-Autor"<<endl;
					cout<<"2-Titulo"<<endl;
					cout<<"3-Edição"<<endl;
					cout<<"4-Cidade"<<endl;
					cout<<"5-Editora"<<endl;
					cout<<"6-Ano"<<endl;
					cout<<"7-CDU"<<endl;
					cout<<"8-Assunto"<<endl;
					cout<<"9-Palavra-Chave"<<endl;
					cout<<"10-Quantidade"<<endl;
					cout<<"11-Quantidade de paginas"<<endl;
					cout<<"12-Tamanho das paginas"<<endl;
					cout<<"13-Todos"<<endl;	
					cout<<"14-SAIR"<<endl;
					cin>>op;
					cin.clear();
					fflush(stdin);
					switch(op){
						case 1:
							cout<<"Entre com o nome do Autor:"<<endl;
							getline(cin, nome);
							cin.clear();
							fflush(stdin);
							item->setAutor(nome);
							break;
						case 2:
							cout<<"Entre com o titulo:"<<endl;
							getline(cin, titulo);
							cin.clear();
							fflush(stdin);
							item->setTitulo(titulo);							
							break;
						case 3:
							cout<<"Entre com a edição:"<<endl;
							cin>>ed;
							cin.clear();
							fflush(stdin);
							item->setEdicao(ed);							
							break;
						case 4:
							cout<<"Entre com o nome do Cidade:"<<endl;
							getline(cin, cidade);
							cin.clear();
							fflush(stdin);
							item->setCidade(cidade);							
							break;
						case 5:
							cout<<"Entre com o nome da Editora:"<<endl;
							getline(cin, editora);
							cin.clear();
							fflush(stdin);
							item->setEditora(editora);							
							break;
						case 6:
							cout<<"Entre com o ano:"<<endl;
							cin>>ano;
							cin.clear();
							fflush(stdin);
							item->setAno(ano);							
							break;
						case 7:
							cout<<"Entre com o CDU:"<<endl;
							getline(cin, CDU);
							cin.clear();
							fflush(stdin);
							item->setCdu(CDU);							
							break;
						case 8:
							cout<<"Entre com o Assunto:"<<endl;
							getline(cin, assunto);
							cin.clear();
							fflush(stdin);
							item->setAssunto(assunto);							
							break;
						case 9:
							cout<<"Entre com a palavra chave:"<<endl;
							getline(cin, PALAVRA);
							cin.clear();
							fflush(stdin);
							item->setPalavraChave(PALAVRA);							
							break;
						case 10:
							cout<<"Entre com a quantidade de exemplares que chegaram:"<<endl;
							cin>>quant;
							cin.clear();
							fflush(stdin);
							if(quant>0){
								int estoque_total=item->getexemplares_Declarados();
								int estoque=item->getExemplares();
								item->setExemplares(estoque+quant);
								item->setexemplares_Declarados(estoque_total+quant);
							}						
							break;
						case 11:
							cout<<"Entre com a quantidade de paginas:"<<endl;
							cin>>pag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Relatorio*>(item)->setPaginas(pag);								
							}
							break;
						case 12:
							cout<<"Entre com o tamanho de paginas:"<<endl;
							cin>>tamPag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Relatorio*>(item)->setTamanhoPaginas(tamPag);								
							}				
							break;
						case 13:
							cadastrarAcervo(item);
							cout<<"Entre com a quantidade de paginas:"<<endl;
							cin>>pag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Relatorio*>(item)->setPaginas(pag);								
							}
							cout<<"Entre com o tamanho de paginas:"<<endl;
							cin>>tamPag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Relatorio*>(item)->setTamanhoPaginas(tamPag);								
							}						
							break;
					}
				}while(op!=14);		
			}else if(dynamic_cast<Midia*>(item)){
				cout<<"Cadastro de Midia"<<endl;
				item->imprimirInformacoes();
				do{
					cout<<"Opções de Midia"<<endl;					
					cout<<"Escolha a opção que deseja alterar:"<<endl;
					cout<<"1-Autor"<<endl;
					cout<<"2-Titulo"<<endl;
					cout<<"3-Edição"<<endl;
					cout<<"4-Cidade"<<endl;
					cout<<"5-Editora"<<endl;
					cout<<"6-Ano"<<endl;
					cout<<"7-CDU"<<endl;
					cout<<"8-Assunto"<<endl;
					cout<<"9-Palavra-Chave"<<endl;
					cout<<"10-Quantidade"<<endl;
					cout<<"11-Tipos de midia"<<endl;
					cout<<"13-Todos"<<endl;	
					cout<<"14-SAIR"<<endl;
					cin>>op;
					cin.clear();
					fflush(stdin);
					switch(op){
						case 1:
							cout<<"Entre com o nome do Autor:"<<endl;
							getline(cin, nome);
							cin.clear();
							fflush(stdin);
							item->setAutor(nome);
							break;
						case 2:
							cout<<"Entre com o titulo:"<<endl;
							getline(cin, titulo);
							cin.clear();
							fflush(stdin);
							item->setTitulo(titulo);							
							break;
						case 3:
							cout<<"Entre com a edição:"<<endl;
							cin>>ed;
							cin.clear();
							fflush(stdin);
							item->setEdicao(ed);							
							break;
						case 4:
							cout<<"Entre com o nome do Cidade:"<<endl;
							getline(cin, cidade);
							cin.clear();
							fflush(stdin);
							item->setCidade(cidade);							
							break;
						case 5:
							cout<<"Entre com o nome da Editora:"<<endl;
							getline(cin, editora);
							cin.clear();
							fflush(stdin);
							item->setEditora(editora);							
							break;
						case 6:
							cout<<"Entre com o ano:"<<endl;
							cin>>ano;
							cin.clear();
							fflush(stdin);
							item->setAno(ano);							
							break;
						case 7:
							cout<<"Entre com o CDU:"<<endl;
							getline(cin, CDU);
							cin.clear();
							fflush(stdin);
							item->setCdu(CDU);							
							break;
						case 8:
							cout<<"Entre com o Assunto:"<<endl;
							getline(cin, assunto);
							cin.clear();
							fflush(stdin);
							item->setAssunto(assunto);							
							break;
						case 9:
							cout<<"Entre com a palavra chave:"<<endl;
							getline(cin, PALAVRA);
							cin.clear();
							fflush(stdin);
							item->setPalavraChave(PALAVRA);							
							break;
						case 10:
							cout<<"Entre com a quantidade de exemplares que chegaram:"<<endl;
							cin>>quant;
							cin.clear();
							fflush(stdin);
							if(quant>0){
								int estoque_total=item->getexemplares_Declarados();
								int estoque=item->getExemplares();
								item->setExemplares(estoque+quant);
								item->setexemplares_Declarados(estoque_total+quant);
							}						
							break;
						case 11:
							dynamic_cast<Midia*>(item)->setTipo();								
							break;
						case 12:
							cadastrarAcervo(item);
							dynamic_cast<Midia*>(item)->setTipo();						
							break;
					}
				}while(op!=13);		
			}else if(dynamic_cast<Cartaz*>(item)){
				cout<<"Cadastro de Cartaz"<<endl;
				item->imprimirInformacoes();
				do{
					cout<<"Opções de Cartaz"<<endl;					
					cout<<"Escolha a opção que deseja alterar:"<<endl;
					cout<<"1-Autor"<<endl;
					cout<<"2-Titulo"<<endl;
					cout<<"3-Edição"<<endl;
					cout<<"4-Cidade"<<endl;
					cout<<"5-Editora"<<endl;
					cout<<"6-Ano"<<endl;
					cout<<"7-CDU"<<endl;
					cout<<"8-Assunto"<<endl;
					cout<<"9-Palavra-Chave"<<endl;
					cout<<"10-Quantidade"<<endl;
					cout<<"11-Quantidade de paginas"<<endl;
					cout<<"12-Tamanho das paginas"<<endl;
					cout<<"13-Todos"<<endl;	
					cout<<"14-SAIR"<<endl;
					cin>>op;
					cin.clear();
					fflush(stdin);
					switch(op){
						case 1:
							cout<<"Entre com o nome do Autor:"<<endl;
							getline(cin, nome);
							cin.clear();
							fflush(stdin);
							item->setAutor(nome);
							break;
						case 2:
							cout<<"Entre com o titulo:"<<endl;
							getline(cin, titulo);
							cin.clear();
							fflush(stdin);
							item->setTitulo(titulo);							
							break;
						case 3:
							cout<<"Entre com a edição:"<<endl;
							cin>>ed;
							cin.clear();
							fflush(stdin);
							item->setEdicao(ed);							
							break;
						case 4:
							cout<<"Entre com o nome do Cidade:"<<endl;
							getline(cin, cidade);
							cin.clear();
							fflush(stdin);
							item->setCidade(cidade);							
							break;
						case 5:
							cout<<"Entre com o nome da Editora:"<<endl;
							getline(cin, editora);
							cin.clear();
							fflush(stdin);
							item->setEditora(editora);							
							break;
						case 6:
							cout<<"Entre com o ano:"<<endl;
							cin>>ano;
							cin.clear();
							fflush(stdin);
							item->setAno(ano);							
							break;
						case 7:
							cout<<"Entre com o CDU:"<<endl;
							getline(cin, CDU);
							cin.clear();
							fflush(stdin);
							item->setCdu(CDU);							
							break;
						case 8:
							cout<<"Entre com o Assunto:"<<endl;
							getline(cin, assunto);
							cin.clear();
							fflush(stdin);
							item->setAssunto(assunto);							
							break;
						case 9:
							cout<<"Entre com a palavra chave:"<<endl;
							getline(cin, PALAVRA);
							cin.clear();
							fflush(stdin);
							item->setPalavraChave(PALAVRA);							
							break;
						case 10:
							cout<<"Entre com a quantidade de exemplares que chegaram:"<<endl;
							cin>>quant;
							cin.clear();
							fflush(stdin);
							if(quant>0){
								int estoque_total=item->getexemplares_Declarados();
								int estoque=item->getExemplares();
								item->setExemplares(estoque+quant);
								item->setexemplares_Declarados(estoque_total+quant);
							}						
							break;
						case 11:
							cout<<"Entre com a quantidade de paginas:"<<endl;
							cin>>pag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Cartaz*>(item)->setPaginas(pag);								
							}
							break;
						case 12:
							cout<<"Entre com o tamanho de paginas:"<<endl;
							cin>>tamPag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Cartaz*>(item)->setTamanhoPaginas(tamPag);								
							}				
							break;
						case 13:
							cadastrarAcervo(item);
							cout<<"Entre com a quantidade de paginas:"<<endl;
							cin>>pag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Cartaz*>(item)->setPaginas(pag);								
							}
							cout<<"Entre com o tamanho de paginas:"<<endl;
							cin>>tamPag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Cartaz*>(item)->setTamanhoPaginas(tamPag);								
							}																					
							break;
					}
				}while(op!=14);				
			}else if(dynamic_cast<Mapa*>(item)){
				cout<<"Cadastro de Mapa"<<endl;	
				item->imprimirInformacoes();
				do{
					cout<<"Opções de Midia"<<endl;					
					cout<<"Escolha a opção que deseja alterar:"<<endl;
					cout<<"1-Autor"<<endl;
					cout<<"2-Titulo"<<endl;
					cout<<"3-Edição"<<endl;
					cout<<"4-Cidade"<<endl;
					cout<<"5-Editora"<<endl;
					cout<<"6-Ano"<<endl;
					cout<<"7-CDU"<<endl;
					cout<<"8-Assunto"<<endl;
					cout<<"9-Palavra-Chave"<<endl;
					cout<<"10-Quantidade"<<endl;
					cout<<"11-Quantidade de paginas"<<endl;
					cout<<"12-Tamanho das paginas"<<endl;
					cout<<"13-Todos"<<endl;	
					cout<<"14-SAIR"<<endl;
					cin>>op;
					cin.clear();
					fflush(stdin);
					switch(op){
						case 1:
							cout<<"Entre com o nome do Autor:"<<endl;
							getline(cin, nome);
							cin.clear();
							fflush(stdin);
							item->setAutor(nome);
							break;
						case 2:
							cout<<"Entre com o titulo:"<<endl;
							getline(cin, titulo);
							cin.clear();
							fflush(stdin);
							item->setTitulo(titulo);							
							break;
						case 3:
							cout<<"Entre com a edição:"<<endl;
							cin>>ed;
							cin.clear();
							fflush(stdin);
							item->setEdicao(ed);							
							break;
						case 4:
							cout<<"Entre com o nome do Cidade:"<<endl;
							getline(cin, cidade);
							cin.clear();
							fflush(stdin);
							item->setCidade(cidade);							
							break;
						case 5:
							cout<<"Entre com o nome da Editora:"<<endl;
							getline(cin, editora);
							cin.clear();
							fflush(stdin);
							item->setEditora(editora);							
							break;
						case 6:
							cout<<"Entre com o ano:"<<endl;
							cin>>ano;
							cin.clear();
							fflush(stdin);
							item->setAno(ano);							
							break;
						case 7:
							cout<<"Entre com o CDU:"<<endl;
							getline(cin, CDU);
							cin.clear();
							fflush(stdin);
							item->setCdu(CDU);							
							break;
						case 8:
							cout<<"Entre com o Assunto:"<<endl;
							getline(cin, assunto);
							cin.clear();
							fflush(stdin);
							item->setAssunto(assunto);							
							break;
						case 9:
							cout<<"Entre com a palavra chave:"<<endl;
							getline(cin, PALAVRA);
							cin.clear();
							fflush(stdin);
							item->setPalavraChave(PALAVRA);							
							break;
						case 10:
							cout<<"Entre com a quantidade de exemplares que chegaram:"<<endl;
							cin>>quant;
							cin.clear();
							fflush(stdin);
							if(quant>0){
								int estoque_total=item->getexemplares_Declarados();
								int estoque=item->getExemplares();
								item->setExemplares(estoque+quant);
								item->setexemplares_Declarados(estoque_total+quant);
							}						
							break;
						case 11:
							cout<<"Entre com a quantidade de paginas:"<<endl;
							cin>>pag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Mapa*>(item)->setPaginas(pag);								
							}
							break;
						case 12:
							cout<<"Entre com o tamanho de paginas:"<<endl;
							cin>>tamPag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Mapa*>(item)->setTamanhoPaginas(tamPag);								
							}
						case 13:
							cadastrarAcervo(item);
							cout<<"Entre com o tamanho de paginas:"<<endl;
							cin>>tamPag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Mapa*>(item)->setTamanhoPaginas(tamPag);								
							}	
							cout<<"Entre com a quantidade de paginas:"<<endl;
							cin>>pag;
							cin.clear();
							fflush(stdin);
							if(pag>0){
								dynamic_cast<Mapa*>(item)->setPaginas(pag);								
							}					
							break;
					}
				}while(op!=14);			
			}
		}
	}
}

void loginBiblioteca(){ //Logins e senha da biblioteca
	char senha[100];
	string login;
	int k = 0;
	do{
		
		cout << "			Login da Biblioteca Universitária" << endl << endl;
		cout << "	Login: ";
		getline(cin, login);
		cin.clear();
		fflush(stdin);
    	cout << "	Senha: ";
    	while(senha[k-1]!='\r') {//Troca do valor presente no vetor pelo *
        	senha[k]=getch();
        	if(senha[k-1]!='\r') {
            	cout << "*";
        }
        k++;
	    }
	    senha[k-1]='\0';
	    if(senha[0] != '1' || senha[1] != 'q' || senha[2] != '2' || senha[3] != 'w' || senha[4] != '3' || senha[5] != 'e' || login != "admin"){
	    	cout << endl << endl << "		Login e/ou senha incorreto!" << endl << endl << endl;
	    	k=0;
		}
	}while(senha[0] != '1' || senha[1] != 'q' || senha[2] != '2' || senha[3] != 'w' || senha[4] != '3' || senha[5] != 'e' || login != "admin");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
}

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "");
	system("chcp 1252 > nul");
	loginBiblioteca();
	
	vector<Acervo *> listAcervo; //Inicialização do acervo
	int opc1 = 1, opc2 = 1;
	do{
		
		cout << "			Biblioteca Universitária" << endl; //Menu inicio 
		cout << "1 - Emprestar livro do acervo" << endl;
		cout << "2 - Pesquisar informações de item do acervo" << endl;
		cout << "3 - Fornecer ficha catalográfica de item do acervo" << endl;
		cout << "4 - Manipular item do acervo" << endl;
		cout << "5 - Sair" << endl;
		cout << "Entre com a opção desejada: ";
		cin >> opc1;
		cin.clear();
		fflush(stdin);
		cout << endl << endl;
		if(listAcervo.empty()==1&&opc1!=4&&opc1!=5){//VERIFICAÇÃO DE ACERVO
			cout<<endl<<"Acervo da biblioteca esta vazio"<<endl;
			opc1=6;
			system("pause");
		}
		switch(opc1){
			case 1:{
				do{
					cout << "			Biblioteca Universitária-Emprestar Item" << endl; // menu Emprestar
					cout << "1 - Listar itens do acervo" << endl;
					cout << "2 - Emprestar item do acervo por código" << endl;
					cout << "3 - Voltar ao menu principal" << endl;
					cout << "Entre com a opção desejada: ";
					cin >> opc2;
					cin.clear();
					fflush(stdin);
					cout << endl << endl;
					
					switch(opc2){
						case 1:{
							listarItens(listAcervo);
							break;
						}
						case 2:{
							emprestarItem(listAcervo);
							break;
						}
						case 3:{
							cout << endl << endl;
							break;
						}
						default:
							cout << "Opção inválida! \nEntre com uma opção válida" << endl << endl;
					}
				}while(opc2 != 3);
				break;
			}
			case 2:{
				do{
					cout << "			Biblioteca Universitária-Pesquisar item" << endl; //Menu pesquisar item
					cout << "1 - Listar itens do acervo" << endl;
					cout << "2 - Pesquisar informações de item do acervo" << endl;
					cout << "3 - Voltar ao menu principal" << endl;
					cout << "Entre com a opção desejada: ";
					cin >> opc2;
					cin.clear();
					fflush(stdin);
					cout << endl << endl;
					
					switch(opc2){
						case 1:{
							listarItens(listAcervo);
							break;
						}
						case 2:{
							pesquisarItem(listAcervo);
							break;
						}
						case 3:{
							cout << endl << endl;
							break;
						}
						default:
							cout << "Opção inválida! \nEntre com uma opção válida" << endl << endl;
					}
				}while(opc2 != 3);
				break;
			}
			case 3:{
				do{
					cout << "			Biblioteca Universitária-Ficha Catalografica" << endl;
					cout << "1 - Listar itens do acervo" << endl;
					cout << "2 - Fornecer ficha catalográfica de item do acervo" << endl;
					cout << "3 - Voltar ao menu principal" << endl;
					cout << "Entre com a opção desejada: ";
					cin >> opc2;
					cin.clear();
					fflush(stdin);
					cout << endl << endl;
					
					switch(opc2){
						case 1:{
							listarItens(listAcervo);
							break;
						}
						case 2:{
							cout<<"Selecione a opção desejada:"<<endl<<"1- Visualizar 1 item"<<endl;//VERIFICAÇÃO para os dois tipos de função
							cout<<"2- Visualizar 1 tipo de item"<<endl;
							int t;
							cin>>t;
							cin.clear();
							fflush(stdin);
							if(t==1){
								fichaCatalografica(listAcervo);									
							}else if(t==2){
								fichaCatalografica_todos_por_tipo(listAcervo);
							}else{
								cout<<"Opção invalida"<<endl;
							}				
							break;
						}
						case 3:{
							cout << endl << endl;
							break;
						}
						default:
							cout << "Opção inválida! \nEntre com uma opção válida" << endl << endl;
					}
				}while(opc2 != 3);
				break;
			}
			case 4:{
				do{
					cout << "			Biblioteca Universitária-Manipular Item" << endl;
					cout << "1 - Listar itens do acervo" << endl;
					cout << "2 - Cadastrar item de acervo" << endl;
					cout << "3 - Alterar item de acervo" << endl;
					cout << "4 - Deletar item de acervo" << endl;
					cout << "5 - Voltar ao menu principal" << endl;
					cout << "Entre com a opção desejada: ";
					cin >> opc2;
					cin.clear();
					fflush(stdin);
					cout << endl << endl;
					if(listAcervo.empty()==1&&opc2!=2&&opc2!=5){//verificação de acervo
						cout<<endl<<"Acervo da biblioteca esta vazio"<<endl;
						opc2=6;
					}
					switch(opc2){
						case 1:{
							listarItens(listAcervo);
							break;
						}
						case 2:{
							cadastrarItem(listAcervo);
							break;
						}
						case 3:{
							alterarItem(listAcervo);
							break;
						}
						case 4:{
							deletarItem(listAcervo);
							break;
						}
						case 5:{
							cout << endl << endl;
							break;
						}
						case 6:{
							cout <<endl;
							break;
						}
						default:
							cout << "Opção inválida! \nEntre com uma opção válida" << endl << endl;
					}
				}while(opc2 != 5);
				break;
			}
			case 5:{
				cout << endl << endl;
				break;
			}
			case 6:{
				cout<<endl;
				break;
			}
			default:
				cout << "Opção inválida! \nEntre com uma opção válida" << endl << endl;
		}
		system("cls");//systema clear para limpesa de tela acada retorno ao menu principal
	}while(opc1 != 5);
	return 0;
}
