#include"list.h"
void Init_list(LIST &l){
	l.size = 0;
	l.first = l.last = NULL;
}
bool isEmpty(LIST l){
	if (l.first == NULL)
		return 1;
	else return 0;
}

LIST_ITEM *create_item(POINT value_in){
	LIST_ITEM *item = new LIST_ITEM;
	item->next = NULL;
	item->value.x = value_in.x;
	item->value.y = value_in.y;
	return item;
}

void append_list(LIST &list, POINT value){
	LIST_ITEM *newItem = create_item(value);
	if (isEmpty(list)){
		list.first = list.last = newItem;
		list.size++;
	}
	else{
		list.last->next = newItem;
		newItem->prev = list.last;
		list.last = newItem;
		list.size++;
	}
}

void prepend_list(LIST &list, POINT value){
	LIST_ITEM *newItem = create_item(value);
	if (isEmpty(list)){
		list.first = list.last = newItem;
		list.size++;
	}
	else{
		newItem->next = list.first;
		list.first->prev = newItem;
		list.first = newItem;
		list.size++;
	}
}

void print_list(LIST list){
	LIST_ITEM *p = list.first;
	while (p != NULL){
		cout << "(" << p->value.x << " , " << p->value.y << ")" << endl;
		p = p->next;
	}
}

POINT get_value(LIST l, int i){
	LIST_ITEM *p = l.first;
	int j = 1;
	while (j <= l.size && p != NULL){
		if (j == i){
			return p->value;
		}
		p = p->next;
		j++;
	}
	POINT value;
	value.x = -1;
	value.y = -1;
	return value;
	
}

