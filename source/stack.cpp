#include"stack.h"
void Init_stack(STACK& stack){
	stack.size = 0;
	stack.top = NULL;
}
Node *create_Nodestack(POINT point){
	Node *p = new Node;
	p->next = NULL;
	p->value.x = point.x;
	p->value.y = point.y;
	return p;
}
POINT pop_stack(STACK &stack){
	if (stack.top == NULL){
		POINT pNull;
		pNull.x = -1;
		pNull.y = -1;
		return pNull;
	}
	else{
		Node *popNode = stack.top;
		stack.top = stack.top->next;
		stack.size--;
		return popNode->value;
		
	}
}

void push_stack(STACK &stack, POINT value){
	Node *newItem = create_Nodestack(value);
	if (stack.top == NULL){
		stack.top = newItem;
	}
	else{
		newItem->next = stack.top;
		stack.top = newItem;
	}
	stack.size++;
}

void print_stack(STACK stack){
	Node *p = stack.top;
	while (p != NULL){
		cout << p->value.x << "," << p->value.y << endl;
		p = p->next;
	}
}