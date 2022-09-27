//Adapte a rotina ssort() para ordenar um vetor de caracteres.

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int minIndex(char v[], int i, int n) 
{
	int j, imenor = i;
	for(j=i+1;j<n;j++)
		if(v[j]<v[imenor])
			imenor=j;
	return imenor;	
}

void ssort(char v[], int n)
{
	int i, indiceMenor;
	for(i=0;i<n;i++)
	{
		indiceMenor = minIndex(v,i,n);
		troca(&v[i], &v[indiceMenor]);
	}
}

int main() 
{
	int i,n;
	char *vet;
	printf("Tamanho do vetor: ");
	scanf("%d",&n);
	vet = malloc(sizeof(char)*n);
	//geraVet(vet,n);
	printf("Dados para o vetor: ");
	for(i=0;i<n;i++)
		scanf("%s",&vet[i]);
	printf("\n");
	printVetor(vet,n);
	ssort(vet,n);
	printf("\nVetor Ordenado \n");
	printVetor(vet,n);
	return 0;
}

