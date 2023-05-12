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
    return NULL;
}



void heap_push(Heap* pq, void* data, int priority){

}


void heap_pop(Heap* pq){

}

Heap* createHeap(){
  Heap * newHeap = (Heap*) malloc(sizeof(Heap));
  if(newHeap == NULL) EXIT_FAILURE;

  newHeap->size = 0;
  newHeap->heapArray = (heapElem*) malloc(sizeof(heapElem));
  newHeap->capac = 3;
  
   return newHeap;
}
