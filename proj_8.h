#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale>

struct lista{
	int info;
	struct lista* prox;
};
typedef struct lista Lista;

Lista* inicializar();
bool vazia (Lista* l);
Lista* insere_inicio(Lista* l, int i);
Lista* insere_fim(Lista* l, int i);
void imprime(Lista* l);
Lista* retira(Lista* l, int i);
void buscar_dado(Lista* l, int i);
void tamanho (Lista *l);
Lista* remove_inicio(Lista* l);
Lista* remove_fim(Lista* l);
void imprime_inicio(Lista* l);
void imprime_fim(Lista* l);
