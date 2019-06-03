#include<iostream>
#include<cstdlib>
#include "arvore.h"

using namespace std;

No::No() {}

No::~No() {
	chave = 0;
	esq = 0;
	dir = 0;
}

Arvore::Arvore() {
	raiz = new No();
	raiz->chave = -1;
}

Arvore::~Arvore() {
	removerRecursivo(raiz);
}

bool Arvore::vazia() {
	return raiz == 0;
}

void Arvore::inserir(int i) {
	inserirRecursivo(raiz, i);
}

void Arvore::inserirRecursivo(No*& node, int i) {
	if (node == 0) {
		node = new No();
		node->chave = i;
	}
	else {
		if ()
	}
}