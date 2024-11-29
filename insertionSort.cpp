#include <stdio.h>
// Algoritmo para implementar o Insertion Sort em C

int vet[10] = {23, 87, 45, 12, 69, 34, 78, 56, 91, 7}; 
// 10 Valores foram pré-atribuídos ao vetor para demonstração

// Função para imprimir o vetor.
void imprimeVetor(int vet[], int n) {
	for(int i = 0; i<10; i++) {
		printf("%d ",vet[i]);
	}
}

// A função recebe como parâmetros o vetor em si (vet[]) e também o número de elementos (n)
void insertionSort(int vet[], int n) {
	
	for(int i = 1; i < n; i++) {
		int ref = vet[i];
		int x = i - 1;
		
		/* Move os elementos do vetor que forem maiores que a referencia (ref)
		para uma posição à frente da posição atual deles. */		
		while(x >= 0 && vet[x] > ref) {
			vet[x + 1] = vet[x];
			x -= 1;
		}
		vet[x + 1] = ref;
	}
}

int main() {
	// Imprime o vetor original
	printf("Vetor original:\n");
	imprimeVetor(vet, 10);
	
	// Reordena o vetor em ordem crescente utilizando o procedimento
	insertionSort(vet, 10);
	
	printf("\n");
	
	// Imprime o vetor reordenado
	printf("\nVetor reordenado:\n");
	imprimeVetor(vet, 10);
	
return 0;
}

