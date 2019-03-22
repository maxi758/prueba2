// prueba de clonar en github
#include <conio.h>
#include <alloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct list{
	int dato;
	list *next;
	
}lista;

lista *crearLista(int num);
lista *insertaNodo(lista *nodo, int num);
bool esListaVacia(lista *nodo);
void mostrar(lista *nodo);
int primerElemento(lista *nodo);
lista *borrar(lista *nodo);
void longitud(lista *nodo);
bool pertenece(int num, lista *nodo);
int comparar(lista *nodo1, lista *nodo2);



lista *crearLista(int num){
	lista *nuevo;
	nuevo=(lista *)malloc(sizeof(lista));
	nuevo->dato=num;
	nuevo->next=NULL;

	return nuevo;
}
lista *insertaNodo(lista *nodo, int num){
	lista *nuevo;
	nuevo=(lista *)malloc(sizeof(lista));
	nuevo->dato=num;
	nuevo->next=nodo;

	return nuevo;
}
bool esListaVacia(lista *nodo){
	bool flag=true;
	if(nodo!=NULL){
		flag=false;
	}
	return flag;

}
void mostrar(lista *nodo){
	lista *aux;
	for (aux=nodo; aux; aux=aux->next)
	{
		printf("%d\t",aux->dato );
	}
}
int primerElemento(lista *nodo){
	return nodo->dato;
}
lista *borrar(lista *nodo){
	lista *aux;

	if (nodo!=NULL)
	{
		aux=nodo->next;
		free(nodo);
	}
return aux;
}
void longitud(lista *nodo){
	lista *aux;
	aux=nodo;
	int contador=0;
	while(aux){
		contador++;
		aux=aux->next;
	}
	printf("\nLa lista tiene %d elementos\n",contador );
}
bool pertenece(int num, lista *nodo){
	lista *aux;
	aux=nodo;
	bool flag=false;
	while(aux){
		if (aux->dato==num)
		{
			flag=true;
			break;
		}
		aux=aux->next;
	}
	return flag;
}

int comparar(lista *nodo1, lista *nodo2){
	int contador=0;
	lista *aux;
	aux=nodo2;

	while(nodo1){

		while(nodo2){
			if (nodo1->dato == nodo2->dato){
				contador++;
				break;			
			}
			nodo2=nodo2->next;
		}
		nodo1=nodo1->next;
		nodo2=aux;
	}
	return contador;
}
