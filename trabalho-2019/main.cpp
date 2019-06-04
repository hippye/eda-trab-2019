#include<iostream>
#include "arvore.h"

using namespace std;

int main(int argc, char* argv[]) {
	int k;

	cout << "Quantos digitos terá a palavra: " << endl;
	cin >> k;

	Arvore* tree = new Arvore(k);

	cout << "As permutações para uma palavra com " << k << " dígitos são:" << endl;
	tree->imprimir();
	return EXIT_SUCCESS;
}