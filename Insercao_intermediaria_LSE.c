#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	struct no{
		int dado;
		struct no *prox;
	};
	struct no *lista, *p,*q;
	int sn, cont, pos;
	lista = NULL;
	//variavel para armazenar os nos contados da lista
	cont = 0;
	
	// Inserção intermediaria em LSE
	
	//contar quantos nós a lista tem
	
	
	do{
		
		// contar a lista
		if(lista==NULL){
			cont = 0; // armazena o numero de nos da lista
		}
		else{
			q = lista; //ponteiro q recebe o endereço de lista, faz a gente conhecer o primeiro ponteiro
			cont =1;
			while(q->prox != NULL){ // vasculha nó por nó para encontrar o que está vazio
				q = q->prox; // enquanto q->prox for diferente de nulo o laço continuará ++ faz o contador continuar
				cont++;
			}
		}
		
		// Usuario informa posição do nó a ser incluido
		printf("Posicao a ser inserida: ");
		scanf("%d",&pos);
		
		// Código para dizer ao usuario que a posicao que ele quer fazer a insercao não existe
		if(pos > cont+1){ // cont + 1 = valor total de nos +1, a posicao é invalida pq n existe
			printf("posicao invalida\n");
		}
		else{
			// se for a ultima posicao
			if(pos==cont+1){
				//inserçã0 a direita
				p = malloc(sizeof(struct no));
				scanf("%d",&p->dado);
				p->prox = NULL;
				q = lista;
				while(q->prox != NULL){
					q = q->prox;
				}
				q->prox = p;
			}
			else{
				if(pos==1){
					//insercao a esquerda
					p = malloc(sizeof(struct no));
					scanf("%d",&p->dado);
					p->prox = lista;
					lista->P;
				}else
				
				
			}
		}
		
		
	
		printf("Deseja inserir outro no a direita? 0-nao  1-sim ");
		scanf("%d",&sn);
	}while(sn==1);
	
	printf("\n\n\n");	
	p=lista;	
	while(p!=NULL){
		printf("%d  ",p->dado);
		p = p->prox;
	}
	return 0;
}

//Remover um no:
//Coloca um ponteiro para o no que quer remover e manda apagar "free"
// se o p está apagando um no 
// tem que corrigir a lista apos apagar um no porque 

// a prova vai ser parecida com o que o professor passou ate hoje mas com uma logica diferente
