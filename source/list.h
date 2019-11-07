#ifndef __list_h__
#define __list_h__
#include"common.h"
struct LIST_ITEM
{
	POINT value;
	LIST_ITEM* prev;
	LIST_ITEM* next;
};

struct LIST{
	int size;
	LIST_ITEM *first;
	LIST_ITEM *last;
};

void Init_list(LIST &);
LIST_ITEM *create_item(POINT);
void append_list(LIST &, POINT);
void prepend_list(LIST &, POINT);
void print_list(LIST);
POINT get_value(LIST, int);
#endif