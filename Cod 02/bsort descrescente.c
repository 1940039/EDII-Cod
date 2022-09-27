#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

//int comp=0;
long long comp=0;
void bsort(int v[], int n) {
	int i,j;
	for(i=1; i<n; i++)  {
		printf("Fase %d\n",i);
		getch();
		printVetor(v,n);
		for(j=0; j<n-i; j++) {
			//printf("%d > %d \n",v[j],v[j+1]);
			comp++;
			if(v[j]<v[j+1]) {
				//printf("Trocando %d com %d /n",v[j],v[j+1]);
				troca(&v[j],&v[j+1]);
				//printVetor(v,n);
			} //endif
		} //endfor j
	} //endfor i
} //endvoid

int main() {
	int *vet,i,n;
	float ini,fim,tempo;
	printf("Tamanho do vetor: ");
	scanf("%d",&n);
	vet = malloc(sizeof(int)*n);
	geraVet(vet,n);
	//printf("Dados para o vetor: ");
	//for(i=0;i<n;i++)
	//	scanf("%d",&vet[i]);
	//printVetor(vet,n);
	ini = clock();
	bsort(vet,n);
	fim = clock();
	tempo = (fim - ini)/1000;
	printf("Vetor Ordenado:\n");
	printVetor(vet,n);
	printf("Tempo: %.4f \n",tempo);
	printf("Qtde de comparacoes: %d\n",comp);
}
