#include "proj_8.h"
using namespace std;

Lista* inicializar()
{
	return NULL;
}

bool vazia(Lista* l)
{
	return l== NULL;	
}

Lista* insere_inicio(Lista* l, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;	
	
	//Trativas
	if (vazia(l))
	{		
		novo->prox = novo;
		return novo;
	}else 
	{
		novo->prox = l->prox;
		l->prox = novo;
		return l;	
	}
	cout << endl;	
}

Lista* insere_fim(Lista* l, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	
	if (vazia(l))
	{
		novo->prox = novo;
		return novo;
	}else
	{
		novo->prox = l->prox;
		l->prox = novo;
		return novo;
	}
	cout << endl;
}

void imprime(Lista* l)
{
	if (vazia(l))
		cout << "Lista Vazia"<< endl;
	Lista* p = l->prox;
	cout << "Info: ";
	do
	{
		cout << p->info <<" - ";
		p = p->prox;
	}while(p!=l->prox);
	cout << endl;
}

Lista* retira(Lista* l, int i)
{
	if (vazia(l))
		cout << "Lista Vazia";
		return l;
	
	Lista* ant = NULL;
	Lista* p = l->prox;
	
	do
	{
		if (p->info == i)
			break;
		ant = p;
		p = p->prox;
	}while(p!=l->prox);
	
	//Não achou
	if (ant!=NULL && p==l->prox){
		cout << "Não achou o elemento"<<endl;
		return l;
	}
	
	//1 Elemento 
	if (p==p->prox)
	{
		free(p);
		return NULL;
	}
	
	//2 Elementos ou mais 
		//Elemento no inicio
	if (ant==NULL && p==l->prox)
	{
		l->prox = p->prox;
		free(p);
		return l;
	}
	
		//Elemento no final
	if (p==l)
	{
		ant->prox = l->prox;
		free(p);
		l = ant;
		return l;
	}
	
	ant->prox = p->prox;
	free(p);
	return l;
	cout<<endl;
}

void buscar_dado(Lista* l, int i)
{
	Lista* p = (Lista*) malloc(sizeof(Lista));
	p = l->prox;
	
	for(; p->info != i; p = p->prox);
	
	if (p->info == i){
		cout << "Número encontrado" <<endl;
	}else {
		cout <<"Numero nao encontrado;" <<endl;
	}
	cout<<endl;	 	
}

void tamanho (Lista* l)
{
	if (vazia(l))
		cout << "Lista Vazia"<< endl;
	Lista* p = l->prox;
	int cont(0);
	do
	{
		cont++;
		p = p->prox;
	}while(p!=l->prox);
	cout <<"Tamanho da lista: "<< cont << endl;
	cout<<endl;
}

Lista* remove_inicio(Lista* l)
{
	if (vazia(l))
	{
		cout<<"Lista Vazia"<<endl;
		return l;
	}	
	Lista* p = (Lista*) malloc(sizeof(Lista));
	p = l->prox;
	l->prox = p->prox;
	free(p);
	return l;
	cout<<endl;
}

Lista* remove_fim(Lista* l)
{
	if (vazia(l))
	{
		cout<<"Lista Vazia"<<endl;
		return l;
	}	
	Lista* p = (Lista*) malloc(sizeof(Lista));
	Lista* ant = (Lista*) malloc(sizeof(Lista));
	p = l->prox;
	
	if (p==l){
		free(p);
		return NULL;
	}
	
	for(; p != l; (ant = p) && (p = p->prox));
	ant->prox = l->prox;
	l = ant;
	free(p);
	return l;
	cout<<endl;
}

void imprime_inicio(Lista* l)
{
	if(!vazia(l))
		cout<<"Info: "<<l->prox->info<<endl;
	else
		cout<<"Lista Vazia"<<endl;	
	cout<<endl;
}

void imprime_fim(Lista* l)
{
	if(!vazia(l))
		cout<<"Info: "<<l->info<<endl;
	else
		cout<<"Lista Vazia"<<endl;
	cout<<endl;
}
