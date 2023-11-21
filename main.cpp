#include <iostream>
using namespace std;
struct NoArvore{
	int data;
	NoArvore *esquerda;
	NoArvore *direita;
};

void preOrdem (NoArvore *raiz){
	if(raiz != NULL){
		cout << raiz -> data << " ";
		preOrdem(raiz -> esquerda);
		preOrdem(raiz -> direita);
	}
}

bool arvoreCheia(NoArvore *raiz){
	if(raiz != NULL){
		if((raiz -> esquerda != NULL && raiz -> direita != NULL) || (raiz -> esquerda == NULL && raiz -> direita == NULL)){
			return true && arvoreCheia(raiz -> esquerda) && arvoreCheia(raiz -> direita);
		}
	
		else{
			return false && arvoreCheia(raiz -> esquerda) && arvoreCheia(raiz -> direita);
		}
			
	}
	else{
		return true;
		
	}
	
}
int main(int argc, char** argv) {
	
	NoArvore *raiz = new NoArvore;
    raiz -> data = 1;
    raiz -> esquerda = NULL;
    raiz -> direita = NULL;
        
    NoArvore *elementoEsquerda = new NoArvore;
    elementoEsquerda -> data = 2;
    elementoEsquerda -> esquerda = NULL;
    elementoEsquerda -> direita = NULL;
    
    raiz->esquerda = elementoEsquerda;
    
    NoArvore *elementoEsquerda2 = new NoArvore;
    elementoEsquerda2 -> data = 4;
    elementoEsquerda2-> esquerda = NULL;
    elementoEsquerda2-> direita = NULL;
    
    elementoEsquerda -> esquerda = elementoEsquerda2;

    NoArvore *elementoDireita = new NoArvore;
    elementoDireita -> data = 3;
    elementoDireita -> esquerda = NULL;
    elementoDireita -> direita = NULL;
    
    raiz -> direita = elementoDireita;
    
    NoArvore *elementoDireita2 = new NoArvore;
    elementoDireita2 -> data = 5;
    elementoDireita2-> esquerda = NULL;
    elementoDireita2-> direita = NULL;
    
    elementoEsquerda -> direita = elementoDireita2;

    preOrdem(raiz);
    
    cout << "A arvore eh cheia?" << arvoreCheia(raiz)<< endl;
	

	return 0;
}
