#include<iostream>
#include "arvore.h"

using namespace std;

int main(int argc, char* argv[]) {
	int k;

	cout << "Quantos digitos ter� a palavra: " << endl;
	cin >> k;

	Arvore* tree = new Arvore(k);

	cout << "As permuta��es para uma palavra com " << k << " d�gitos s�o:" << endl;
	tree->imprimir();
	return EXIT_SUCCESS;
}