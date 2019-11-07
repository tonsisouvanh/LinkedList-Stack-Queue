#ifndef __queue_h__
#define __queue_h__
#include"common.h"
struct Nodeq{
	POINT value;
	Nodeq *next;
};
struct QUEUE{
	int size;
	Nodeq *front;
	Nodeq *back;
};
void Init_q(QUEUE&);
Nodeq *create_Nodeq(POINT);
POINT dequeue(QUEUE &);
void enqueue(QUEUE &,POINT);
void print_queue(QUEUE);

int partition(int *arr, int start, int end, int(*compar)(const int*, const int*));
void quicksort(int *arr, int start, int end, int(*compar)(const int*, const int*));
int compar(const int *a, const int *b);
void quick_sort(int *array, int n,int(*compar)(const int*,const int*));

#endif