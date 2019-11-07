#include"queue.h"
void Init_q(QUEUE& q){
	q.size = 0;
	q.front = q.back = NULL;
}
Nodeq *create_Nodeq(POINT value_in){
	Nodeq *p = new Nodeq;
	p->value.x = value_in.x;
	p->value.y = value_in.y;
	p->next = NULL;
	return p;
}

POINT dequeue(QUEUE &q){
	if (q.front == NULL){
		POINT pNull;
		pNull.x = -1;
		pNull.y = -1;
		return pNull;
	}
	else{
		POINT x = q.front->value;
		if (q.size == 1)
			Init_q(q);
		else{
			q.front = q.front->next;
			q.size--;
		}
		return x;
	}
}
void enqueue(QUEUE &q,POINT value){
	Nodeq *newItem = create_Nodeq(value);
	if (q.front == NULL){
		q.front = q.back = newItem;
	}
	else{
		q.back->next = newItem;
		q.back = newItem;
	}
	q.size++;
}
void print_queue(QUEUE q){
	Nodeq* p = q.front;
	while (p != NULL){
		cout << p->value.x << "," << p->value.y << endl;
		p = p->next;
	}
}
int compar(const int *a, const int *b){
	return ( *(int*)a <= *(int*)b );
}

int partition(int *arr, int start, int end, int(*compar)(const int*, const int*))
{
	int pivot = arr[end];
	int i = (start - 1);

	for (int j = start; j <= end - 1; j++)
	{
		int *x = &arr[j];
		int *y = &pivot;
		if (compar(x,y))
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[end]);
	return (i + 1);
}
void quicksort(int *arr, int start, int end, int(*compar)(const int*, const int*))
{
	if (start < end)
	{
		int pi = partition(arr, start, end,compar);
		quicksort(arr, start, pi - 1,compar);
		quicksort(arr, pi + 1, end,compar);
	}
}
void quick_sort(int *array, int n, int(*compar)(const int*, const int*)){
	quicksort(array, 0, n,compar);
}