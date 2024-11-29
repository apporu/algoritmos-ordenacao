#include <stdio.h>
// Algoritmo para implementar o Insertion Sort em C

int vet[10] = {23, 87, 45, 12, 69, 34, 78, 56, 91, 7}; 
// 10 Valores foram pr�-atribu�dos ao vetor para demonstra��o

// Fun��o para imprimir o vetor.
void imprimeVetor(int vet[], int n) {
	for(int i = 0; i<10; i++) {
		printf("%d ",vet[i]);
	}
}

// A fun��o recebe como par�metros o vetor em si (vet[]) e tamb�m o n�mero de elementos (n)
void insertionSort(int vet[], int n) {
	
	for(int i = 1; i < n; i++) {
		int ref = vet[i];
		int x = i - 1;
		
		/* Move os elementos do vetor que forem maiores que a referencia (ref)
		para uma posi��o � frente da posi��o atual deles. */		
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

