class No {
public:
	No();
	No(int i);
	No(int i, int nivel, int limite, No *pai);
	~No();
	int chave;
	No *esq;
	No *dir;
	No *pai;
	No getProximo() {
		No *proximo;
		proximo = NULL;
		if (pai != NULL) {
			if (this == pai->esq) {
				proximo = pai->dir;
			}
		}
	}
};

class Arvore {
public:
	Arvore(int k);
	~Arvore();
	bool vazia();
	void inserir(int i);
	bool remover(int i);
	int qtdelementos();
	void imprimir();
private:
	No *raiz;
};