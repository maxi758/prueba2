#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main()
{
	lista *inicio=NULL;
	lista *aux;
	lista *otroNodo=NULL;
	int num, coincide;
	srand(time(NULL));
	inicio=crearLista(3);
	if (esListaVacia(otroNodo))
	{
		printf("la segunda lista no tiene elementos\n");
	}
	for (int i = 0; i < 4; ++i)
	{
		num=rand()%90+11;
		inicio=insertaNodo(inicio,num);
		
	}
	for (int i = 0; i < 8; ++i)
	{	
		num=rand()%11+50;
		otroNodo=insertaNodo(otroNodo,num);
	}
	if (!esListaVacia(inicio))
	{
		printf("la primera lista tiene elementos\n");
	}
	printf("\nPRIMERA LISTA\n");
	mostrar(inicio);
	printf("\nSEGUNDA LISTA\n");
	mostrar(otroNodo);
	longitud(inicio);
	printf("el primer elemento es %d\n",primerElemento(inicio));
	inicio=borrar(inicio);
	printf("\nLUEGO DEL BORRADO\n\n");
	mostrar(inicio);
	longitud(inicio);
	printf("el primer elemento es %d\n",primerElemento(inicio));
	if (pertenece(55,otroNodo))
	{
		printf("el numero 55 esta en la primera lista\n");	
	}
	else
		printf("numero 55 no encontrado\n");
	
	printf("\nHay %d Coincidencias\n",comparar(otroNodo,inicio));
	return 0;
}