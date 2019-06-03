#include<iostream>
#include<cstdlib>
#include "arvore.h"

using namespace std;

No::No() {}

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

 Arvore::Arvore(int k) { //Gera toda a arvore de permutações
	 raiz = new No(-1, 0, k, NULL);
 }