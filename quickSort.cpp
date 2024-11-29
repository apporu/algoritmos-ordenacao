#include <stdio.h>
// Algoritmo que implementa o Quick Sort em C

int vet[] = {77, 4, 93, 70, 93, 25, 54, 48, 10, 15, 95, 54, 32, 72, 66, 19, 41, 29, 
			48, 83, 49, 94, 50, 70, 91, 14, 9, 59, 6, 33, 21, 77, 63, 10, 32, 72, 57, 68, 19, 70}; 
// 40 Valores foram pr�-atribu�dos ao vetor para demonstra��o

// n recebe o tamanho do vetor (tamanho em bytes do vetor inteiro, dividido por uma das c�lulas)
int n = sizeof(vet) / sizeof(vet[0]);

// Fun��o para imprimir o vetor.
void imprimeVetor(int vet[], int n) {
	for(int i = 0; i<n; i++) {
		printf("%d ",vet[i]);
	}
}

// Fun��o que troca os valores de 2 vari�veis, usando temp como auxiliar
void troca(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int divisao(int vet[], int low, int high) {
	// Define um ponto �ncora
	int ancora = vet[high];
	
	// Ponto do menor elemento e indica a posi��o correta da �ncora encontrada at� o momento
	int i = low - 1;
	
	// Percorre o vetor (vet[low .. high]) e move todos os elementos
	// menores para a esquerda. Elementos de "low" para "i" ficam menores a cada itera��o.
	for(int x = low; x <= high - 1; x++) {
		if(vet[x] < ancora) {
			i++;
			troca(&vet[i], &vet[x]);
		}
	}
	
	// Move a ancora para elementos menores e retorna a posi��o
	troca(&vet[i + 1], &vet[high]);
	return i + 1;
}

// Implementa��o do Quick Sort
void quickSort(int vet[], int low, int high) {
	if(low < high) {
		
		// divI � o �ndice de retorno da ancora pela divis�o
		int divI = divisao(vet, low, high); 
		
		quickSort(vet, low, divI - 1);
		quickSort(vet, divI +1, high);
	}
}

int main() {
	printf("Vetor original:\n");
	imprimeVetor(vet, n);
	
	quickSort(vet, 0, n -1);
	printf("\n");
	
	printf("\nVetor ordenado com QuickSort:\n");
	imprimeVetor(vet, n);
	
return 0;
}
