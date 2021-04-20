#include <stdio.h>

void heapIncreaseKey(int *A,int tam,int i){
  if(i < A[tam]){
    printf("Nova chave é menor que chave atual");
  }

  A[tam] = i;

  while(i > 0 && A[tam/2]< A[tam]){
    int aux = A[tam];
    A[tam] = A[tam/2];
    A[tam/2] = aux;

    //tam = Pai(i);
  }

}



void heapInsert(int *A, int tam, int i){
  tam++;
  A[tam] = -999;

  heapIncreaseKey(A, tam, i);  


}


int maxHeapAlt(int *A, int tam){
  int B[] = {};
  B[0] = A[0];
  int sizeB = sizeof(B)/sizeof(int);

  for (int i = 1; i < tam; i++){
    heapInsert(B, sizeB-1, A[i]);
  }

return *B;
}

int main(void) {
//Declarar vetor
  int A[] = {5, 12, 64, 1, 37, 90, 91, 97};
  int tam = 8;

  maxHeapAlt(A, tam);
 // heap_sort(A, tam);

  for(int i = 0; i < tam; i++){
    printf(" - %d", A[i]);
  }
return 0;
}