#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "heap.h"

typedef struct nodo{
   void* data;
   int priority;
}heapElem;

typedef struct Heap{
  heapElem* heapArray;
  int size;
  int capac;
} Heap;


void* heap_top(Heap* pq){
  if(pq->size == 0) return NULL;
  
    return pq->heapArray[0].data;
}



void heap_push(Heap* pq, void* data, int priority){
  if(pq->size + 1 == pq->capac){
  pq->capac = pq->capac * 2 + 1;
  pq->heapArray = (heapElem *) realloc(pq->heapArray, sizeof(heapElem) * pq->capac);
  } 

  int indice = pq->size;
  
  pq->heapArray[pq->size].data = data;
  pq->heapArray[pq->size].priority = priority;

  while(pq->heapArray[indice].priority > pq->heapArray[(indice - 1)/2].priority){
    heapElem aux = pq->heapArray[(indice - 1)/2];
    pq->heapArray[(indice - 1)/2] = pq->heapArray[indice];
    pq->heapArray[indice] = aux;
    indice = (indice - 1) / 2;
  }

  pq->size++;
}


void heap_pop(Heap* pq){

}

Heap* createHeap(){
  Heap * newHeap = (Heap*) malloc(sizeof(Heap));
  if(newHeap == NULL) EXIT_FAILURE;

  newHeap->size = 0;
  newHeap->heapArray = (heapElem*) malloc(sizeof(heapElem)*3);
  newHeap->capac = 3;
  
   return newHeap;
}
