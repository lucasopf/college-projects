// Fila é uma estrutura de dadosque segue o princípio da FIFO (First In First Out)
// Elementos são adicionados a partir do final conhecido como rear
// Elementos são eliminados a partir de uma outra extremidade chamada de front

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

# define MAX 5

int queue[MAX]; //array como Fila com 5 elementos
int front, rear;

//adicionar os elementos na estrutura de dados Fila.
void add(){
	int item;
	if(rear == MAX-1){ //condição para verificar stackoverflow
		printf("\n\n Desculpe, sem espaço para novos elementos, a Fila esta cheia...,");
		system("pause");
	}else{
		printf("\n\n Entre com o elemento a ser inserido na Fila:- ");
		scanf(" %d", &item);
		++rear;
		queue[rear]=item;
		if(front == -1)
			front = 0;
	}
}

void display(){
	int i;
	if(front == -1){	//condicao para verificar se existem elementos na Fila.
		printf("\n\n Desculpe, sem elementos na Fila...,");
	}
	else{
		printf("\n\t");
		for (i = front; i <= rear ; i++){
			printf("[%d]",queue[i]);
		}
		printf("\n\n");
	}
	system("pause");
}

//função para executar a operação de exclusão
void del(){
	int item;
	if(front == -1){ //condicao para verificar underflow
		printf("\n\n Desculpe, sem elementos na Fila...,");
	}else{
		item = queue[front]; //suprimindo o elemento da frente.
		printf("\n\n Item Deletado = %d\n\n", item); //exibindo o elemento suprimido.
	}
	if(front == rear){
		front = rear =-1;
	}else{
		front++; //muda a posição da frente para o proximo elemento.
	}
	system("pause");
}

int main(){
	front = rear = -1;
	int ch;
	do{
	printf("\n\n Operações em um lista usando array");
	printf("\n\n 1.Inserir");
	printf("\n\n 2.Remover");
	printf("\n\n 3.Imprimir");
	printf("\n\n 0.Sair");
	printf("\n\n Entre com o valor:- ");
	scanf(" %d", &ch);
	switch(ch){
		case 1:
			add();
			break;
		case 2:
			del();
			break;
		case 3:
			display();
			break;
		case 0:
			exit(0);
			break;
		default:
			printf("\n\n\tEntrada Invalida..., -> ");
			system("pause");		
	}
	system ("cls"); //limpar a tela, equivale a clrscr();
	}while(ch != 0);
	
	getch();
}
