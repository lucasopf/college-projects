#include <stdio.h>
#include <stdlib.h>

#define MAX 10	//máximo igual á dez.

int pilha[MAX];	//array utilizado como pilha com dez elementos.
int top;		//indicar qual o elemento sobre a pilha.

void push();	//adicionar um elemento na pilha.
void pop();		//remover o elemento sobre a pilha.
void display();	//mostrar os elemento da pilha.

int main(){
	int op;
	
	top = -1; 	//para indicar que a pilha está vazia.
		
	do{
		printf("PILHA by LUCAS\n\n");
		printf("1. Inserir\n");
		printf("2. Remover\n");
		printf("3. Imprimir\n");
		printf("0. Sair\n\n");
		printf("ESCOLHA UMA OPCAO: ");
		scanf(" %d", &op);
		
		switch(op){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 0:
				exit(0);
			default:
				printf("Valor Invalido!\n");		
				system("pause");	
		}
	system ("cls");
	}while(op != 0);

system("pause");
return 0;
}

void push(){
	int item;
	//checar se a pilha está cheia:
	if (top == MAX-1){		//9 = MAX-1 ==> 9 = 10-1 ==> 9 == 9. 
		printf("\n\n\t Pilha Cheia...,\n\n");
		system("pause");
	}else{
		printf("Insira o item desejado: ");
		scanf("%d", &item);
		top ++;
		pilha[top] = item;
	}
}

void pop(){
	int data;
	if (top == -1){ 		//condicao p verificar se a pilha esta vazia.
		printf("\n\n Pilha Vazia...,\n\n");
	}else{
		data = pilha[top];	//guarda o valor do topo em data.
		top--;
		printf("\n\t [%d] foi deletado.\n\n", data);
		}
	system("pause");
}

void display(){
	int i;
	if (top == -1){
		printf("\n\n Pilha Vazia...,\n\n");
	}else{
		printf("\n Esses sao os elementos da pilha:\n");
		for (i = top; i>=0; i--){
			printf("\t\t\t\t [%d]\n", pilha[i]);
		}
		printf("\n");
	}
	
	system("pause");
}
