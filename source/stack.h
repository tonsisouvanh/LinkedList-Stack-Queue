#ifndef __stack_h__
#define __stack_h__
#include"common.h"
using namespace std;
struct Node{
	POINT value;
	Node *next;
};
struct STACK{
	int size;
	Node *top;
};
void Init_stack(STACK&);
Node *create_Nodestack(POINT );
POINT pop_stack(STACK &);
void push_stack(STACK &, POINT);
void print_stack(STACK);
#endif