#include<iostream>
#include "arvore.h"

using namespace std;

No::No() {
	chave = 0;
	pai = 0;
	esq = 0;
	dir = 0;
}

No::No(int valor) {
	chave = valor;
 }

No::No(int i, int nivel, int limite, No* noPai) {
	chave = i;
	pai = noPai;
	esq = NULL;
	dir = NULL;
	if (nivel < limite)
	{
		esq = new No(0, nivel + 1, limite, this);
		dir = new No(1, nivel + 1, limite, this);
	}
}

 No::~No() {
	 chave = NULL;
	 esq = NULL;
	 dir = NULL;
	 pai = NULL;
 }

  No* No::proximo() {
	 No* proximo;
	 proximo = NULL;
	 if (pai != NULL) {
		 if (this == pai->esq) {
			 proximo = pai->dir;
		 }
		 else {
			 proximo = pai->proximo();
			 if (proximo != NULL) {
				 proximo = proximo->esq;
			 }
		 }
	 }
	 return proximo;
 }

 Arvore::Arvore(int k) { //Gera toda a arvore de permutacoes
	 raiz = new No(-1, 0, k, NULL);
 }

 void Arvore::imprimirNo(No* atual) {
	 if (atual->pai != NULL) {
		 imprimirNo(atual->pai);
		 cout << atual->chave;
	 }
 }

 void Arvore::imprimir() {
	 No* inicio;
	 inicio = raiz->esq;
	 if (inicio != NULL) {
		 No* atual;
		 while (inicio->esq != NULL) {
			 inicio = inicio->esq;
		 }
		 atual = inicio;
		 while (atual != NULL)
		 {
			 imprimirNo(atual);
			 cout << endl;
			 atual = atual->proximo();
		 }
	 }
 }