class No {
public:
	No();
	~No();
	int chave;
	No* esq;
	No* dir;
};

class Arvore {
public:
	Arvore();
	~Arvore();
	bool vazia();
	void inserir(int i);
	bool remover(int i);
	int qtdelementos();
	void imprimir();
private:
	No* raiz;
	void imprimirRecurcivo();
	void removerRecursivo(No*& n);
};